#include <stdio.h>
#include <stdlib.h>
int main(){
  int a, b, c = 0, soma = 0;
  float media;
  printf("Insira o começo da faixa: \n");
  scanf("%d", &a);
  printf("Insira o fim da faixa: \n");
  scanf("%d", &b);
  c = 1 + (b - a);
  for (; a<=b ;a++)
    soma = soma + a;
  media =(float) soma/c;
  printf("A média aritmética dos termos da faixa é: %.2f\n", media);
} 