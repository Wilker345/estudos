#include <stdio.h>
#include <stdlib.h>
int main(){
  float a, b;
  int c;
  printf("insira o 1º número: \n");
  scanf("%f", &a);
  printf("insira o 2º número: \n");
  scanf("%f", &b);
  printf("A soma entre os dois números é: %.2f\n", a + b);
  printf("O produto entre os dois números é: %.2f\n", a * b);
  printf("A diferença entre os dois números é: %.2f\n", a - b);
  printf("O quociente entre os dois números é: %.2f\n", a / b);
  c = (int) a % (int) b;
  printf("O resto da divisão inteira entre os dois números é: %d\n", c);

}