#include <Wire.h>
#include <SPI.h>
#include <Adafruit_PN532.h>
#include <EEPROM.h>
#include <RfidDb.h>

#define PN532_IRQ   (2)
#define PN532_RESET (3)


Adafruit_PN532 nfc(PN532_IRQ, PN532_RESET); // use for I2C communication

RfidDb db = RfidDb(1000, 0, 255); //1st param: maximum number of ID that database can hold
                               //3nd param: byte offset from 0 where the database resides

void setup(void) {
  EEPROM.put(0, 0); //1st param: location on where we want to put the data
                    //2nd param: data to write
  
  Serial.begin(115200);
  Serial.println("Welcome to Asia Pacific College!");
  nfc.begin(); 
  db.begin();
  // configure board to read RFID tags
  nfc.SAMConfig();
  Serial.println("Waiting... Please tap you card here ...");
  Serial.println("");
}


void loop(void) {
  uint8_t success;
  uint8_t uid[] = { 0, 0, 0, 0, 0, 0, 0 };  // Buffer to store the returned UID
  uint8_t uidLength;                        // Length of the UID

  uint8_t keya[6] = { 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5 };
  uint8_t keyb[6] = { 0xD3, 0xF7, 0xD3, 0xF7, 0xD3, 0xF7 };
    
  success = nfc.readPassiveTargetID(PN532_MIFARE_ISO14443A, uid, &uidLength);
  
  if (success) {
    //Authentication is needed to read the blocks
    uint8_t success2 = nfc.mifareclassic_AuthenticateBlock (uid, uidLength, 4, 0, keyb);
    uint8_t success22 = nfc.mifareclassic_AuthenticateBlock (uid, uidLength, 5, 0, keyb);
    if (!success2 && !success22)
    {
      Serial.println("Authentication Failed! Please try again.");
      return;
    }else{  
      Serial.println("Authentication successful!");
    }
    
    
    // Display ID of the card 
    uint32_t cardid = uid[0];
    cardid <<= 8;
    cardid |= uid[1];
    cardid <<= 8;
    cardid |= uid[2];  
    cardid <<= 8;
    cardid |= uid[3]; 
    Serial.print("ID Number: ");
    Serial.println(cardid);
    
    db.insert(cardid, "cardid");

    Serial.println("");
    countPerson();
    Serial.println("");

    //To read the data from blocks
    uint8_t data[16];
    uint8_t data2[16];
    uint8_t success3 = nfc.mifareclassic_ReadDataBlock(4, data); //for block 4
    uint8_t success33 = nfc.mifareclassic_ReadDataBlock(5, data2); //for block 5
   
    if (success33 && success33)
    {
     
      // read successful
      nfc.PrintHexChar(data, 16);
      nfc.PrintHexChar(data2, 16);
      Serial.println("");
      
      // Wait a bit before reading the card again
       delay(2000);
    }
    else
    {
      Serial.println("Ooops ... Error!");
    }   
  }
}

void countPerson(){
  uint8_t count = db.count();
  Serial.print("Number of person: ");
  Serial.print(count);
}

