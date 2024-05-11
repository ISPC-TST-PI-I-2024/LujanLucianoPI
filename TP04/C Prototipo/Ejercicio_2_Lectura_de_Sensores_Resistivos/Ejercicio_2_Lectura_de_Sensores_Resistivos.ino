void setup() {
  Serial.begin(9600);
}

void loop() {
  // Leer el valor del potenciómetro
  int valorsensor = analogRead(A0);


  // Mostrar los valores en el monitor serie
  Serial.print("Valor analógico: ");
  Serial.println(valorsensor);
  

  delay(1000); // Esperar 100 milisegundos antes de la siguiente lectura
  }
