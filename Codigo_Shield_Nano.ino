#include <Servo.h>

Servo Servo1, Servo2;  // Criando os objetos Servo 1 e Servo 2.

int pos = 0;    // Variavel que controla as posições dos servos
void setup() {
  Servo1.attach(4);  // Definindo o pino 4 para o servo 1
  Servo2.attach(5);  // Definindo o pino 5 para o servo 1
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // Variando a posição de 0 a 180 acrescentando 1º
    // in steps of 1 degree
    Servo1.write(pos);              // Fazendo os servos seguirem a posição definida na variável que recebeu o incremento
    Servo2.write(pos); 
    delay(15);                       // Espera 15ms para fazer o movimento ser mais suave
  }
  for (pos = 180; pos >= 0; pos -= 1) { // Variando a posição de 180° a 0° acrescentando 1º
    Servo1.write(pos);              // Fazendo os servos seguirem a posição definida na variável que recebeu o decremento
    Servo2.write(pos); 
    delay(15);                       // Espera 15ms para fazer o movimento ser mais suave
  }