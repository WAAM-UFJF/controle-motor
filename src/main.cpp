#include <Arduino.h>
float y, e, r;
//  y é a velocidade saída do motor (pegar pelo encoder)
// e é o erro (saida do sistema menos a entrada)


void setup() {
  // put your setup code here, to run once:
  Serial.println("Digite um valor de referencia: ");
  r = Serial.read();
}

void loop() {
  // put your main code here, to run repeatedly:

  e = y - r;


}