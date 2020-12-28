#include <Ethernet.h>
char code = ""
int local = 0

void setup() {
    // Configurações
    Serial.begin(9600);
    
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, INPUT);
}

void loop() {  
    // Acionamento do hardware A
    if digitalWrite(11) == HIGH {
          digitalWrite(12, HIGH);
          Serial.println("GENIUS: Hardware (A) foi acionado com sucesso!")
          delay(9600);
          digitalWrite(12, LOW);
     }
     // Leitura do hospedeiro
     if analogWrite(0) == HIGH {
          Serial.println("------------------------------------------------------------")
          Serial.println("GENIUS: O HOSPEDEIRO reconheceu um valor de ENTRADA         ")
          Serial.println("GENIUS: Para ejetar a o valor RESET a placa ou insira outro ")
          Serial.println("------------------------------------------------------------")
     }
     
}
