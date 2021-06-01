#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
  int x;
  printf("Insira o valor inteiro: \n");
  scanf("%d", &x);
  x = (int)pow(x, 2);
  printf("O quadrado do valor inserido é: %d\n", x);

}