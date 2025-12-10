const int pinoLDR = A0; 
int leitura = 0; 
float tensao = 0.0; 
int pinoLed = 3;

void setup() {
  Serial.begin(9600); 

  pinMode(pinoLDR, INPUT); 
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  
  leitura = analogRead(pinoLDR);

  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t"); // tabulacao

  tensao = leitura * 5.0 / 1024.0;
  Serial.print("Tensão: ");
  Serial.print(tensao);
  Serial.print("V");

  Serial.println(); 

  delay(1000); 

  if (tensao < 1) {
    digitalWrite(pinoLed, HIGH);
  } else {
    digitalWrite(pinoLed, LOW);
  }
}