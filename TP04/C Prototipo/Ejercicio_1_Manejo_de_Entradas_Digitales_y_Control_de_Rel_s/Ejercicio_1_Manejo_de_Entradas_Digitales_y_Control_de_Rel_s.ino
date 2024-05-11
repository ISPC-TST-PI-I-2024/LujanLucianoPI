#include <Arduino.h>
int salida1 = 8;
int salida2 = 9;
int salida3 = 10;
int salida4 = 11;
int entrada1 = 4;
int entrada2 = 5;
int entrada3 = 6;
int entrada4 = 7;
int valorIngresado = 0; // Variable to store the entered value

void setup() {
  pinMode(salida1, OUTPUT);
  pinMode(salida2, OUTPUT);
  pinMode(salida3, OUTPUT);
  pinMode(salida4, OUTPUT);
  pinMode(entrada1, INPUT);
  pinMode(entrada2, INPUT);
  pinMode(entrada3, INPUT);
  pinMode(entrada4, INPUT);
  Serial.begin(9600); // Initialize serial communication at 9600 baud
  Serial.println("Sistema Ready:");
  Serial.println("1 Encendido rele 1:");
  Serial.println("2 Encendido rele 2:");
  Serial.println("3 Apagado rele 1:");
  Serial.println("4 Apagado rele 2:");
  Serial.println("esperando el ingreso de numero:"); // espera
}

void loop() {
  if (Serial.available() > 0) {
    
    valorIngresado = Serial.parseInt();

    
    Serial.print("numero ingesado: ");
    Serial.println(valorIngresado);
    digitalWrite(valorIngresado - 1, HIGH);

    // Clear the serial buffer
    while (Serial.available() > 0) {
      Serial.read();
    }
  }
  if(valorIngresado == 1 || entrada1 == HIGH){
     Serial.println(" encendiendo rele 1 ");
     digitalWrite(salida1, HIGH);
  } else if(valorIngresado == 3 || entrada3 == HIGH){
     Serial.println(" Apagando rele 1 ");
     digitalWrite(salida1, LOW);
    }
  if(valorIngresado == 2 || entrada2 == HIGH){
     Serial.println(" encendiendo rele 2 ");
     digitalWrite(salida2, HIGH);
   }else if(valorIngresado == 4 || entrada4 == HIGH){
     Serial.println(" Apagando rele 2 ");
     digitalWrite(salida1, LOW);
    }

}
