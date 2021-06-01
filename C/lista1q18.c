#include <stdio.h>
#include <stdlib.h>
int main(){
  //presumo que o "valor" da circunferencia seja o seu comprimento
  float pi=3.14159, r, d, c, a;
  printf("> Insira o raio da circunferência: \n");
  scanf("%f", &r);
  d = 2 * r, c = 2 * pi * r, a = pi * (r * r);
  printf("> O diâmetro da circunferência é: %.2f\n> O comprimento da circunferência é: %.2f\n> A área da circunferência é: %.2f\n", d, c, a);

}