// Definir los pines para cada LED
const int led1Pin = 13; // Pin para el primer LED
const int led2Pin = 12; // Pin para el segundo LED
const int led3Pin = 11; // Pin para el tercer LED

void setup() {
  // Configurar los pines de los LEDs como salidas
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
}

void loop() {
  // Encender el primer LED
  digitalWrite(led1Pin, HIGH); // Enciende el LED1
  delay(1000);                 // Espera 1 segundo
  digitalWrite(led1Pin, LOW);  // Apaga el LED1

  // Encender el segundo LED
  digitalWrite(led2Pin, HIGH); // Enciende el LED2
  delay(1000);                 // Espera 1 segundo
  digitalWrite(led2Pin, LOW);  // Apaga el LED2

  // Encender el tercer LED
  digitalWrite(led3Pin, HIGH); // Enciende el LED3
  delay(1000);                 // Espera 1 segundo
  digitalWrite(led3Pin, LOW);  // Apaga el LED3
}