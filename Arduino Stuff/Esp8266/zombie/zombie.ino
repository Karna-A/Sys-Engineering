#include <WiFi.h>
#include <SPI.h>
#include <HardwareSerial.h>

#define LED 2
const char* NAME;
const char* ID;
const char* ssid     = "TPG 7C42";
const char* password = "abcd1976";
//const char* ssid     = "edu.Trade";
//const char* password = "Welcome@2020";
const char* host = "12.0.0.1";
const uint16_t port = 17;


String Event_Name = "Button Press";
String Key = "dqh2EClLMhF_vUzXaj8DO6"; //Webhooks key for IFTT https://maker.ifttt.com/trigger/{event}/with/key/dqh2EClLMhF_vUzXaj8DO6



// Replace with your unique IFTTT URL resource
//String resource = "/trigger/" + Event_Name + "/with/key/" + Key;
String resource = "/trigger/" +Event_Name+ "/with/key/" + Key;


// Maker Webhooks IFTTT
const char* server = "maker.ifttt.com";


bool ButtonState = false;
void setup()
{
  pinMode(2,OUTPUT);
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
   if (touchRead(T0)==0){
    Serial.print("Button pressed ");
    makeIFTTTRequest();

  }if (WiFi.status() == WL_CONNECTED ){
        delay(500);
        digitalWrite(LED,HIGH);
        delay(500);
        digitalWrite(LED,LOW);
    }
  // if (touchRead(T0)==0) Serial.println("Button Pressed"); // Reads the touch pin 0 and if the pin is touched ie connected to ground it value will be 0 
  //    delay(1000);
  // if (touchRead(T0)>0) Serial.println("Button nozt Pressed");
  //     delay(1000);
}

void makeIFTTTRequest () {
Serial.println("Connecting to ");
Serial.print(server);

WiFiClient client;

const int httpPort = 80;

if (!client.connect(server, httpPort)) {
    return;
}
int retries = 5;
  while (!!!client.connect(server, httpPort) && (retries-- > 0)) {
    Serial.print(".");
  }
  Serial.println();
  if (!!!client.connected()) {
    Serial.println("Failed to connect...");
  }

  Serial.print("Request resource: ");
  Serial.println(resource);

  // Temperature in Celsius
  String jsonObject = String("{\"value1\":\"") + NAME + "\",\"value2\":\"" + ID
                      + "\"}";
       
// Post the button press to IFTTT
  if (client.connect(server, httpPort)) {
      Serial.print("hurray");
      delay(500);
  }
}