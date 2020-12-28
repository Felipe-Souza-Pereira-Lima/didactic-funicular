
void setup() {
  // Configurações
  Serial.begin(9600);
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH); 
  delay(5000);
  digitalWrite(12, LOW); 
  delay(1000);
}
