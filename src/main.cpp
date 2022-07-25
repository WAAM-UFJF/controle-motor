#include <Arduino.h>
float y, e, r, sum = 0;
//  y é a velocidade saída do motor (pegar pelo encoder)
// e é o erro (saida do sistema menos a entrada)
// sum é a variavel q vai receber a soma dos erros para fazer o controlador integral

float kp = 1, ki = 1, kd = 1;



void setup() {
  // put your setup code here, to run once:
  Serial.println("Digite um valor de referencia: ");
  r = Serial.read();
}

void loop() {
  // put your main code here, to run repeatedly:

  e = y - r;


}

void pid_controller(){


}
