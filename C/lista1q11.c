#include <stdio.h>
#include <stdlib.h>
int main (){
  float r, cd, d;
  printf("Insira o valor em reais: \n");
  scanf("%f", &r);
  printf("Insira a cotação do dólar atual: \n");
  scanf("%f", &cd);
  d = (r/cd);
  printf("O valor em dólar eh: %.2f\n", d);
  
}