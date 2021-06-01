#include <stdio.h>
#include <stdlib.h>
int main(){
  int pr;
  float va, en;
  printf("Insira o valor da compra\n");
  scanf("%f", &va);
  en = (((va / 3) + ((int)va%3)));
  pr = (int)( (va - en) /2);
  printf("entrada: %.2f reais\nparcela: 2 vezes de %d reais\n", en, pr);
}