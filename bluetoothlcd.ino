 #include <LiquidCrystal.h>
char data;                //Variable for storing received data
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
  Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
  pinMode(13, OUTPUT);        //Sets digital pin 13 as output pin
  lcd.begin(16, 2);
  lcd.print("Ben Wong");
}
void loop()
{
  if (Serial.available() > 0) // Send data only when you receive data:
  {
    data = Serial.read();      //Read the incoming data and store it into variable data
    Serial.print(data);        //Print Value inside data in Serial monitor
    Serial.print("\n");        //New line
    lcd.clear();
    lcd.print("Ben Wong");
    if (data == '1')           //Checks whether value of data is equal to 1
    {
      lcd.setCursor(0, 1);
      lcd.print("1");  //If value is 1 then LED turns ON
    }
    else if (data == '0')      //Checks whether value of data is equal to 0
    {
      lcd.setCursor(0, 1);
      lcd.print("0");
    }
    else if (data == '2')      //Checks whether value of data is equal to 0
    {
      lcd.setCursor(0, 1);
      lcd.print("2");
    }
    else if (data == '3')      //Checks whether value of data is equal to 0
    {
      lcd.setCursor(0, 1);
      lcd.print("3");
    }
    else if (data == '4')      //Checks whether value of data is equal to 0
    {
      lcd.setCursor(0, 1);
      lcd.print("4");
    }
    else if (data == '5')      //Checks whether value of data is equal to 0
    {
      lcd.setCursor(0, 1);
      lcd.print("5");
    }
    else if (data == '6')      //Checks whether value of data is equal to 0
    {
      lcd.setCursor(0, 1);
      lcd.print("6");
    }
    else if (data == '7')      //Checks whether value of data is equal to 0
    {
      lcd.setCursor(0, 1);
      lcd.print("7");
    }
    else if (data == '8')      //Checks whether value of data is equal to 0
    {
      lcd.setCursor(0, 1);
      lcd.print("8");
    }
    else if (data == '9')      //Checks whether value of data is equal to 0
    {
      lcd.setCursor(0, 1);
      lcd.print("9");
    }
    else
    {
      lcd.setCursor(0, 1);
      lcd.print("Not encoded");
    }
  }
}
