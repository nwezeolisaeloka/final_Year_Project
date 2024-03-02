#include <LiquidCrystal.h> //to include the lcd library code
LiquidCrystal lcd(2,3,4,5,6,7); //LiquidCrystal lcd(RS,EN,D4,D5,D6,D7)
////////////////////////////// definition for LCD
int BUTTON_1_PIN =A0; 
int BUTTON_2_PIN =A1;  
int BUTTON_3_PIN = A2;
int BUTTON_4_PIN=A3; 
int LED_1_PIN=8; 
int LED_2_PIN=9;
int LED_3_PIN= 10; 
int LED_4_PIN = 11; 
int LED_5_PIN = 12; 
int LED_6_PIN= 13; 
int LED_7_PIN = 1; 
int LED_8_PIN = 0;

int BUTTON_1_PIN_CONTAINER =0; 
int BUTTON_2_PIN_CONTAINER =0;  
int BUTTON_3_PIN_CONTAINER =0;
int BUTTON_4_PIN_CONTAINER =0; 

void setup() {
  // INNITIALIZING....................................................................
   pinMode(BUTTON_1_PIN, INPUT); //setting the BUTTON_1_PIN as input pin
   pinMode(BUTTON_2_PIN, INPUT); //setting the BUTTON_2_PIN as input pin
   pinMode(BUTTON_3_PIN, INPUT); //setting the BUTTON_3_PIN as input pin
   pinMode(BUTTON_4_PIN, INPUT); //setting the BUTTON_4_PIN as input pin
   pinMode(LED_1_PIN, OUTPUT); //setting the LED_1_PIN as OUTPUT pin
   pinMode(LED_2_PIN, OUTPUT); //setting the LED_2_PIN as OUTPUT pin
   pinMode(LED_3_PIN, OUTPUT); //setting the LED_3_PIN as OUTPUT pin
   pinMode(LED_4_PIN, OUTPUT); //setting the LED_4_PIN as OUTPUT pin
   pinMode(LED_5_PIN, OUTPUT); //setting the LED_5_PIN as OUTPUT pin
   pinMode(LED_6_PIN, OUTPUT); //setting the LED_6_PIN as OUTPUT pin
   pinMode(LED_7_PIN, OUTPUT); //setting the LED_7_PIN as OUTPUT pin
   pinMode(LED_8_PIN, OUTPUT); //setting the LED_8_PIN as OUTPUT pin
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, LOW);
   digitalWrite(LED_5_PIN, LOW);
   digitalWrite(LED_6_PIN, LOW); 
   digitalWrite(LED_7_PIN, LOW);
   digitalWrite(LED_8_PIN, LOW);
   digitalWrite(BUTTON_1_PIN, HIGH);
   digitalWrite(BUTTON_2_PIN, HIGH);
   digitalWrite(BUTTON_3_PIN, HIGH);
   digitalWrite(BUTTON_4_PIN, HIGH);
   lcd.begin(16, 2); //indicating the type of lcd in use
   lcd.setCursor(2,0);
   lcd.print("ARDUINO BASED");
   lcd.setCursor(0,1);
   lcd.print("implementation KIT");
   delay(2000);
}

void loop() {
  BUTTON_1_PIN_CONTAINER=digitalRead(BUTTON_1_PIN);
  BUTTON_2_PIN_CONTAINER=digitalRead(BUTTON_2_PIN);
  BUTTON_3_PIN_CONTAINER=digitalRead(BUTTON_3_PIN);
  BUTTON_4_PIN_CONTAINER=digitalRead(BUTTON_4_PIN);
  
  if (BUTTON_1_PIN_CONTAINER==0)
  {
   lcd.setCursor(0,0);
   lcd.print("PERFORMING LED..");
   lcd.setCursor(0,1);
   lcd.print("  BLINKING...");
   digitalWrite(LED_1_PIN, HIGH);
   digitalWrite(LED_2_PIN, HIGH);
   digitalWrite(LED_3_PIN, HIGH);
   digitalWrite(LED_4_PIN, HIGH);
   digitalWrite(LED_5_PIN, HIGH);
   digitalWrite(LED_6_PIN, HIGH); 
   digitalWrite(LED_7_PIN, HIGH);
   digitalWrite(LED_8_PIN, HIGH);
   delay(300);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, LOW);
   digitalWrite(LED_5_PIN, LOW);
   digitalWrite(LED_6_PIN, LOW); 
   digitalWrite(LED_7_PIN, LOW);
   digitalWrite(LED_8_PIN, LOW);
    delay(300);
   
    }else 

    if (BUTTON_2_PIN_CONTAINER==0)
    {lcd.setCursor(0,0);
    lcd.print("PERFORMING LED..");
   lcd.setCursor(0,1);
   lcd.print("LIGHT CHASING..");
   digitalWrite(LED_1_PIN, HIGH);
   delay(200);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, HIGH);
   delay(200);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_3_PIN, HIGH);
   delay(200);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, HIGH);
   delay(200);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, LOW);
   digitalWrite(LED_7_PIN, LOW);
   digitalWrite(LED_8_PIN, HIGH);
   delay(200);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, LOW);
   digitalWrite(LED_8_PIN, LOW);
   digitalWrite(LED_7_PIN, HIGH);
   delay(200); 
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, LOW);
   digitalWrite(LED_5_PIN, LOW);
   digitalWrite(LED_7_PIN, LOW);
   digitalWrite(LED_6_PIN, HIGH);
   delay(200);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, LOW);
   digitalWrite(LED_5_PIN, LOW);
   digitalWrite(LED_6_PIN, LOW);
   digitalWrite(LED_7_PIN, LOW);
   digitalWrite(LED_5_PIN, HIGH);
   delay(200);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, LOW);
   digitalWrite(LED_5_PIN, LOW);
   digitalWrite(LED_6_PIN, LOW);
   digitalWrite(LED_7_PIN, LOW);
   digitalWrite(LED_8_PIN, LOW);
  // delay(500);
  } else 

    if (BUTTON_3_PIN_CONTAINER==0)
    {lcd.setCursor(0,0);
    lcd.print("PERFORMING SWAP..");
   lcd.setCursor(0,1);
   lcd.print("..DANCE IN 2's..");
   digitalWrite(LED_1_PIN, HIGH);
   digitalWrite(LED_2_PIN, HIGH);
   delay(400);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_5_PIN, HIGH);
   digitalWrite(LED_6_PIN, HIGH);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, LOW); 
   digitalWrite(LED_7_PIN, LOW);
   digitalWrite(LED_8_PIN, LOW);
   delay(400);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_5_PIN, LOW);
   digitalWrite(LED_6_PIN, LOW);
   digitalWrite(LED_3_PIN, HIGH);
   digitalWrite(LED_4_PIN, HIGH); 
   digitalWrite(LED_7_PIN, LOW);
   digitalWrite(LED_8_PIN, LOW);
    delay(400);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_5_PIN, LOW);
   digitalWrite(LED_6_PIN, LOW);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, LOW); 
   digitalWrite(LED_7_PIN, HIGH);
   digitalWrite(LED_8_PIN, HIGH);
    delay(400);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_5_PIN, LOW);
   digitalWrite(LED_6_PIN, LOW);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, LOW); 
   digitalWrite(LED_7_PIN, LOW);
   digitalWrite(LED_8_PIN, LOW);}else 

    if (BUTTON_4_PIN_CONTAINER==0)
    {lcd.setCursor(0,0);
    lcd.print("PERFORMING SWAP");
   lcd.setCursor(0,1);
   lcd.print("..DANCE IN 4's..");
   digitalWrite(LED_1_PIN, HIGH);
   digitalWrite(LED_2_PIN, HIGH);
   digitalWrite(LED_3_PIN, HIGH);
   digitalWrite(LED_4_PIN, HIGH);
   digitalWrite(LED_5_PIN, LOW);
   digitalWrite(LED_6_PIN, LOW); 
   digitalWrite(LED_7_PIN, LOW);
   digitalWrite(LED_8_PIN, LOW);
   delay(400);
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, LOW);
   digitalWrite(LED_5_PIN, HIGH);
   digitalWrite(LED_6_PIN, HIGH); 
   digitalWrite(LED_7_PIN, HIGH);
   digitalWrite(LED_8_PIN, HIGH);
    delay(400);
   }
   else{ lcd.setCursor(0,0);
   lcd.print("ARDUINO BASED...");
   lcd.setCursor(0,1);
   lcd.print("implementation KIT..");
   digitalWrite(LED_1_PIN, LOW);
   digitalWrite(LED_2_PIN, LOW);
   digitalWrite(LED_3_PIN, LOW);
   digitalWrite(LED_4_PIN, LOW);
   digitalWrite(LED_5_PIN, LOW);
   digitalWrite(LED_6_PIN, LOW); 
   digitalWrite(LED_7_PIN, LOW);
   digitalWrite(LED_8_PIN, LOW);}
    }