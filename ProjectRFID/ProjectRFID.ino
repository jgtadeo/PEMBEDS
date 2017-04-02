#include <Wire.h>
#include <SPI.h>
#include <Adafruit_PN532.h>
#include <RfidDb.h>

#define PN532_IRQ   (2)
#define PN532_RESET (3)


Adafruit_PN532 nfc(PN532_IRQ, PN532_RESET); // use for shield with an I2C communication

RfidDb db = RfidDb(1000, 0, 255); //1st param: maximum number of ID that database can hold
                                  //2nd param: byte offset from 0 where the database resides
                                  //3rd param: maximum number of bytes of names that are stored with ids
void setup(void) {
  EEPROM.put(0,0);
  Serial.begin(115200); //for faster reading and printing out data at the same time
  
  Serial.println("Welcome to Asia Pacific College!");
  nfc.begin(); //initializes the nfc (near field communication)
  db.begin(); //initializes the database
  
  // configure board to read RFID tags
  nfc.SAMConfig();
  Serial.println("Waiting... Please tap you card ...");
  Serial.println("==========================================================================");
}


void loop(void) {
  uint8_t uid[] = { 0, 0, 0, 0, 0, 0, 0 };  // Buffer to store the returned UID
  uint8_t uidLength;                        // Length of the UID
  
  uint8_t keyb[6] = { 0xD3, 0xF7, 0xD3, 0xF7, 0xD3, 0xF7 };
    
  uint8_t success = nfc.readPassiveTargetID(PN532_MIFARE_ISO14443A, uid, &uidLength); 
  
  if (success) 
  {
    //Authentication is needed to read the blocks
    uint8_t successAuth = nfc.mifareclassic_AuthenticateBlock (uid, uidLength, 4, 0, keyb); //1st Param: Card number
                                                                                            //2nd Param: Length (4/7 bytes)
                                                                                            //3rd Param: Block Address
                                                                                            //4th Param: Key use to authenticate
    uint8_t successAuth2 = nfc.mifareclassic_AuthenticateBlock (uid, uidLength, 5, 0, keyb);
    
    if (successAuth && successAuth2)
    {
      Serial.println("Authentication successful!");
    }else{  
      Serial.println("Authentication Failed. Please try again.");
      Serial.println("");
      return;
    }

    Serial.println("");
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

    //Read the data from blocks
    uint8_t data[16];
    uint8_t data2[16];
    uint8_t successRead = nfc.mifareclassic_ReadDataBlock(4, data); //1st Param: block number, 2nd Param: Data in block
    uint8_t successRead2 = nfc.mifareclassic_ReadDataBlock(5, data2);
   
    if (successRead && successRead2)
    {     
      // read successful
      nfc.PrintHexChar(data, 16);
      nfc.PrintHexChar(data2, 16);
      Serial.println("==========================================================================");
      // Wait a bit before reading the card again
       delay(2000);
    }
    else
    {
      Serial.println("Error Occured. Please try again!");
    }   
  }
}

void countPerson(){
  uint8_t count = db.count();
  Serial.print("Number of person: ");
  Serial.print(count);
}

