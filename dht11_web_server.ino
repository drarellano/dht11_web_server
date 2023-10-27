#include <DHT.h>
#include "WiFi.h"
#include "EspAsyncWebSrv.h"
// #include <Adafruit_Sensor.h>
const char *ssid = "INFINITUM4503_2.4";
const char *password = "g9dRjVdS98";

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

AsynWebServer server(80);
String readDHTTemperature()
{
  float t = dht.readTemperature();
  if (isnan(t))
  {
    Serial.println("Failed to read from DHT sensor");
    return "--";
  }
  else
  {
    Serial.println(t);
    return String(t);
  }
}
String readDHTHumidity()
{
  float h = dht.readHumidity();
  if (isnan(h))
  {
    Serial.println("Failed to read from DHT sensor");
    return "--";
  }
  else
  {
    Serial.println(h);
    return String(h);
  }
}
void setup()
{
  // put your setup code here, to run once:
}

void loop()
{
  // put your main code here, to run repeatedly:
}
