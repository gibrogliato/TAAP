const int EntradaAnalogica = A0;   // Entrada analógica
const int PinoLED = 13;           // Pino digital para o LED

void setup() {
  Serial.begin(9600);   // Inicializa a comunicação serial com uma taxa de 9600 bps
  pinMode(PinoLED, OUTPUT);  // Define o pino do LED como saída
}

void loop() {
  int valorSensor = analogRead(EntradaAnalogica);   // Lê o valor analógico da Entrada 1
    
  if (analogRead(EntradaAnalogica) == 0) {
    Serial.print("A");   // Se a capacitância 1 for menor que a referência, envia o caractere 'A' pela porta serial
    digitalWrite(PinoLED, HIGH);   // Acende o LED
  } else {
    digitalWrite(PinoLED, LOW);   // Apaga o LED
  }
  
  delay(500);   // Aguarda 500 milissegundos antes de repetir o loop
}
