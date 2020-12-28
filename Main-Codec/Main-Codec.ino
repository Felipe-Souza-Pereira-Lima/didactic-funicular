#include <Ethernet.h>
#include <SD.h> 

char code = ""
int local = 0

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
      local = 1
      while (1);
    }
    
    myFile = SD.open("API-EXECUTE.exe", FILE_WRITE);
  
    if (myFile) {
      Serial.print("Caregando o API-EXECUTE.exe...");
      myFile.println("Testando: 1, 2, 3.");
      // close the file:
      myFile.close();
      Serial.println("Concluido.");
    } else {
      // if the file didn't open, print an error:
      Serial.println("Erro ao abrir API-EXECUTE.exe");
    }
}

void loop() {  
    
}
