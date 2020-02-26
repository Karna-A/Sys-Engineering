#include <WiFi.h>

const char* ssid     = "TPG 7C42";
const char* password = "abcd1976";

// const char* ssid     = "edu.Trade";
// const char* password = "Welcome@2020";

bool ButtonState = false;
void setup()
{
  Serial.begin(115200);
  delay(100); // give me time to bring up serial monitor


  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}
int value = 0;

void loop()
{

  // if (touchRead(T0)==0) Serial.println("Button Pressed"); // Reads the touch pin 0 and if the pin is touched ie connected to ground it value will be 0 
  //    delay(1000);
  // if (touchRead(T0)>0) Serial.println("Button not Pressed");
  //     delay(1000);
}
