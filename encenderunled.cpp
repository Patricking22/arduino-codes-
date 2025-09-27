// Definimos los pines donde estarán conectados los LEDs
#define LED1 2  // LED 1 conectado al pin GPIO 2
#define LED2 4  // LED 2 conectado al pin GPIO 4

void setup() {
  // Configuramos los pines como salida
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  // Encendemos ambos LEDs
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  delay(1000); // Esperamos 1 segundo

  // Apagamos ambos LEDs
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  delay(1000); // Esperamos 1 segundo
}