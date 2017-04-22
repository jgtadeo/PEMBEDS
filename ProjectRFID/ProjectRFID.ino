#include<SoftwareSerial.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_PN532.h>
#include<LiquidCrystal.h>
#include<SoftwareSerial.h>
LiquidCrystal lcd(2,3,4,5,6,7);

#define PN532_IRQ   (2)
#define PN532_RESET (3)

uint32_t owner = 3523540461;
int counter = 3;
boolean unlocked = false;
boolean buzzer_mode = false;

Adafruit_PN532 nfc(PN532_IRQ, PN532_RESET); // use for shield with an I2C communication

void setup(void) {
  Serial.begin(9600); //for faster reading and printing out data at the same time
  nfc.begin(); //initializes the nfc (near field communication)
  // configure board to read RFID tags
  nfc.SAMConfig();
//  lcd.print("Waiting... Please tap you card ...");
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
    // Display ID of the card 
    uint32_t cardid = uid[0];
    cardid <<= 8;
    cardid |= uid[1];
    cardid <<= 8;
    cardid |= uid[2];  
    cardid <<= 8;
    cardid |= uid[3]; 
    

    if(cardid != owner){
      //lcd.print("Authentication failed. Try again. ");
      buzzer_mode = true;
       counter--;
       if(counter == 0){
        buzzer_mode = true;
        Serial.print("Intruder Alert!!!");
      }
    }else{
      buzzer_mode = false;
      Serial.print("Authentication successful.");
      Serial.print("ID Number: ");
      Serial.println(cardid);
      Serial.print("");
      counter = 3;
    }
  }
  delay(2000);
}

