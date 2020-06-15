/* www.learningbuz.com */
/*Impport following Libraries*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
//I2C pins declaration
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 

void setup() 
{

lcd.begin(16,1);//Defining 16 columns and 2 rows of lcd display
//lcd.backlight();//To Power ON the back light
//lcd.backlight();// To Power OFF the back light

}

void loop() 
{
//Write your code
lcd.setCursor(0,0); //Defining positon to write from first row,first column .
lcd.print("You're Cute ;)"); //You can write 16 Characters per line .
delay(1000);//Delay used to give a dynamic effect
//lcd.scrollDisplayLeft();
//delay(100);
//lcd.setCursor(0,1);  //Defining positon to write from second row,first column .
//lcd.print("Be Okay xx <3");
//delay(8000); 
//  lcd.setCursor(0, 0);
//  for (int x = 0; x < 10; x++) {
//    lcd.print("Do you have a name or can I call you mine  ");
//    delay(500);
//  }
//  lcd.clear();
//lcd.scrollDisplayLeft();
//delay(200);
}

//lcd.clear();//Clean the screen
//lcd.setCursor(0,0); 
//lcd.print(" SUBSCRIBE ");
//lcd.setCursor(0,1);
//lcd.print(" TECH MAKER ");
//delay(8000); 
