#include <Keypad.h>
#include<LiquidCrystal.h>
#include<SoftwareSerial.h>
LiquidCrystal lcd(2,3,4,5,6,7);

const byte ROWS = 4;
const byte COLS = 4;
const int buzzerPin = A1;
const int ledPin = A0;
const int motionPin = 12;

boolean unlocked = false;
boolean buzzer_mode = false;

String enterCode = "Enter Code: ";
int tries = 3;
long previousMillis = 0;
long interval = 100;
int ledState = LOW;
char code;
String enteredCode;
String password = "1234";

char keys[ROWS][COLS] = {
  {'1','2','3','+'},
  {'4','5','6','-'},
  {'7','8','9','C'},
  {'*','0','=','D'}  
};

byte rowPins[ROWS] = {8,9,10,11};
byte colPins[COLS] = {A5,A4,A3,A2};
Keypad customKeypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  
  lcd.begin(16,2);
  
  lcd.setCursor(0,0);
  lcd.print("Burglar");
  lcd.setCursor(0,1);
  lcd.print("Alarm");
  delay(3000);
  lcd.clear();
  lcd.cursor();
  lcd.blink();
  Serial.begin(9600);
}

void loop() {


  while(1){
    code = customKeypad.getKey();
    lcd.setCursor(0,1);
    lcd.print(enterCode);
    
    if(unlocked){
      lcd.setCursor(0,0);
      lcd.print("Alarm Disabled!");
    }else{
      lcd.setCursor(0,0);
      lcd.print("Alarm Enabled!");
    }


    if(code=='C'){
      enteredCode = "";
      lcd.clear();
        
    }

    if(code >='0' && code <= '9'){
      enteredCode += code;
      lcd.setCursor(enterCode.length(),1);
      lcd.print(enteredCode);
      delay(1000);
    }

    if(code == 'D'){
      if(enteredCode.equals(password)){
        if(unlocked == false){
          unlocked = true;  
          lcd.clear();
          enteredCode = "";
        }else{
          unlocked = false;
          lcd.clear();
          enteredCode = "";
        }
      }else{
        unlocked = false;
        lcd.setCursor(0,0);
        lcd.print("Wrong Password!");
        lcd.setCursor(0,1);
        lcd.print("Try again.");
        tries--;
        if(tries == 0){
          buzzer_mode = true;
          tries = 3;
        }
        enteredCode = "";  
        delay(2000);
        lcd.clear();
      }
    }

    if(digitalRead(motionPin)){
      if(unlocked){
        buzzer_mode = false;  
      }else if(unlocked == false){
        buzzer_mode = true;
      }
    } 


    if(buzzer_mode){
      unsigned long currentMillis = millis();
      if(currentMillis - previousMillis > interval) {
        previousMillis = currentMillis;   
        if (ledState == LOW){
          ledState = HIGH;
        }else{
          ledState = LOW;
        }
      digitalWrite(ledPin, ledState);
      }
      tone(buzzerPin,1000);
    }

    if(buzzer_mode == false){
      noTone(buzzerPin);
      digitalWrite(ledPin, LOW);  
    }
  }
}
