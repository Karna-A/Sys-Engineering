// ESP32 Touch Test
// Just test touch pin - Touch0 is T0 which is on GPIO 4.
bool ButtonState = false;
void setup()
{
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop()
{

  if (touchRead(T0)==0) Serial.println("Button Pressed"); // Reads the touch pin 0 and if the pin is touched ie connected to ground it value will be 0 
      delay(1000);
  if (touchRead(T0)>0) Serial.println("Button not Pressed");
      delay(1000);
}
