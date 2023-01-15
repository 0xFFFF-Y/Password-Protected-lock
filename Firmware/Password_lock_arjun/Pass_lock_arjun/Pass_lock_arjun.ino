
// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to

const int zero = 10, one = 1, two = 2, three = 3, four = 4, five = 5;
const int six = 6, seven = 7, eight = 8, nine = 9;

const int rs = 12, en = 11, d4 = A4, d5 = A3, d6 = A2, d7 = A1;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int pin;
const int User_Pin=1234; //Password 

int press_button()
{
  if(digitalRead(zero)||digitalRead(one)||digitalRead(two)||digitalRead(three)||digitalRead(four)||digitalRead(five)
  ||digitalRead(six)||digitalRead(seven)||digitalRead(eight)||digitalRead(nine)) 
  {
  return 1;
  }
  else
  {
    return 0;
  }
}

void setup() {
 for(int i=1;i<=10;i++)
  {
    pinMode(i,INPUT);//PUSH BUTTONS 1-10
  }  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("--ENTER PIN--");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  
  for(int state=0;state<6;state++)
  {
    if(digitalRead(zero))
    {
      pin=0;
      lcd.print("0");              
    }  
    if(digitalRead(one))
    {
      pin=1;  
       lcd.print("1");             
    }  
    if(digitalRead(two))
    {
      pin=2;  
       lcd.print("2");             
    }  
    if(digitalRead(three))
    {
      pin=3;              
    } 
    if(digitalRead(four))
    {
      pin=4;              
    }  
    if(digitalRead(five))
    {
      pin=5;              
    }  
    if(digitalRead(six))
    {
      pin=6;              
    }  
    if(digitalRead(seven))
    {
      pin=7;              
    }  
    if(digitalRead(eight))
    {
      pin=8;              
    }  
    if(digitalRead(nine))
    {
      pin=9;              
    }    
    //Final_Pin=(Final_Pin*10)+pin;  //Generation of 4 digit pin from Single pins
    
    delay(200);
  }
 






  
}

