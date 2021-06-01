#include <stdio.h>
#include <stdlib.h>
int main(){
  int s, m, h;
  printf("Insira a quantidade de segundos: \n");
  scanf("%d", &s);
  m = (s / 60);
  h = (m / 60);
  printf("O tempo total é: \n%d horas, %d minutos e %d segundos.\n", h, m%60, s%60);
}