#include <Ethernet.h>
#include <SD.h> 

char code = "ETHERNET.h";
int local = 0;

void setup() {
    // Configurações
    Serial.begin(9600);
    
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, INPUT);
    // Leitura SD and Starts DRIVERS
    Serial.print("Iniciando DRIVERS...");

    if (!SD.begin(4)) {
      Serial.println("Inicialização falhou!");
      local = 1;
      while (1);
    }
    
    char myFile = Serial;
  
    if (myFile) {
        Serial.print("Caregando o API-EXECUTE.exe...");
        Serial.println("Concluido.");
    } else {
        Serial.println("Erro ao abrir API-EXECUTE.exe");
    }
}

void loop() {  
    
}
