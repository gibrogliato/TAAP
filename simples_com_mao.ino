const int EntradaAnalogica1 = A0;   // Entrada analógica 1
const int EntradaAnalogica2 = A1;   // Entrada analógica 2

void setup() {
  Serial.begin(9600);   // Inicializa a comunicação serial com uma taxa de 9600 bps
}

void loop() {
  int valorSensor1 = analogRead(EntradaAnalogica1);   // Lê o valor analógico da Entrada 1
  int valorSensor2 = analogRead(EntradaAnalogica2);   // Lê o valor analógico da Entrada 2
 
    
  if (valorSensor1 == 0) {
    Serial.print("A");   // Se a capacitância 1 for menor que a referência, envia o caractere 'A' pela porta serial
  }
  
  if (valorSensor2 == 0) {
    Serial.print("B");   // Se a capacitância 2 for menor que a referência, envia o caractere 'B' pela porta serial
  }
  
  delay(500);   // Aguarda 500 milissegundos antes de repetir o loop
}
