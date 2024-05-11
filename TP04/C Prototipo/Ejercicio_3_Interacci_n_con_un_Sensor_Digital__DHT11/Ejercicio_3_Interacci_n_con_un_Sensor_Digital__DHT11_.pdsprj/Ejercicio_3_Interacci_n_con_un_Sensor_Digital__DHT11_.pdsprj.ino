#include <DHT.h>

#define DHTTYPE DHT11   // DHT 11  (AM2302)
 
DHT dht(DHTPIN, DHTTYPE);

//Variables
int chk;
float hum;  //humedad 
float temp; //Stores temperature value

void setup()
{
    Serial.begin(9600);
    Serial.println(" Midienendo temperatura inicial :");
  dht.begin();
  }

void loop()
{
    
    hum = dht.readHumidity();
    temp= dht.readTemperature();
    //muestra en serial monitor los valores de temperatura
    Serial.print("Humedad: ");
    Serial.print(hum);
    Serial.print(" %, Temperaruta: ");
    Serial.print(temp);
    Serial.println(" Celsius");
    delay(2000); //Delay 2 sec.
}
