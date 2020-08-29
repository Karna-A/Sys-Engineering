        /*
 *  This sketch sends data via HTTP GET requests to data.sparkfun.com service.
 *
 *  You need to get streamId and privateKey at data.sparkfun.com and paste them
 *  below. Or just customize this script to talk to other HTTP servers.
 *
 */

#include <WiFi.h>

#define LED 2

const char* ssid     = "TPG 7C42";
const char* password = "abcd1976";

// const char* ssid     = "edu.Trade";
// const char* password = "Welcome@2020";

// const char* host = "data.sparkfun.com";
// const char* streamId   = "....................";
// const char* privateKey = "....................";

void setup()
{
    pinMode(LED,OUTPUT);
    Serial.begin(115200);
    delay(10);

    // We start by connecting to a WiFi network

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
    Serial.println("WiFi connecteed");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}

int value = 0;

void loop()
{
    if (WiFi.status() == WL_CONNECTED ){
        delay(500);
        digitalWrite(LED,HIGH);
        delay(500);
        digitalWrite(LED,LOW);
    }
}
