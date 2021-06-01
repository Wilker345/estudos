#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
  float a, b, c;
  printf("Insira o 1º número do ponto flutuante: \n");
  scanf("%f", &a);
  printf("Insira o 2º número do ponto flutuante: \n");
  scanf("%f", &b);
  printf("Insira o 3º número do ponto flutuante: \n");
  scanf("%f", &c);
  printf("A média aritmédica é: %.2f \n", (a + b + c)/3);
  printf("A média geométrica é: %.2f\n", sqrt(a * b * c));
}