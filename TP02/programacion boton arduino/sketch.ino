#define  led  13 // se define el pin del LED
#define  boton  2 // se define el pin del boton


int estadoBoton; //estado del botón

void setup() {
  pinMode(led, OUTPUT); // Configura el pin del LED como salida
  pinMode(boton, INPUT); // Configura el pin del botón como entrada
}

void loop() {
  estadoBoton = digitalRead(boton); // Lee el estado del botón

  if (estadoBoton == HIGH) { // Si el botón esta apretado
    digitalWrite(led, HIGH); // prende el LED
  } else { // Si el boton no esta presionado
    digitalWrite(led, LOW); // Apaga el LED
  }
}