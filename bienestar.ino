#include <DHT11.h>
int pin=4;
DHT11 dht11(pin); 
int sensorAgua = A0;

void setup()
{
   Serial.begin(9600);
}
 
void loop()
{
  delay(5000);
  float t, h;
  float s = analogRead(A0);
  
  //red neuronal
  float bienestar = (-0.36568771*h +  -1.97858201*t + -0.27378322*s + 382.47773678555427);
  
  
    Serial.print("temperature:");
    Serial.print(t);
    Serial.print(" humidity:");
    Serial.print(h);
    Serial.print("agua:");
    Serial.print(s);
    Serial.print(" bienestar:");
    Serial.print(bienestar);
    Serial.println();
  }
  


  
 
 
  
 
 
 