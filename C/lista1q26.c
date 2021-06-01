#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
  int a, b, c, d, x;
  printf("Insira o x da primeira coordenada: \n");
  scanf("%d", &a);
  printf("Insira o y da primeira coordenada: \n");
  scanf("%d", &b);
  printf("Insira o x da segunda coordenada: \n");
  scanf("%d", &c);
  printf("Insira o y da segunda coordenada: \n");
  scanf("%d", &d);
  x = sqrt( (pow(c - a, 2) + (pow(d - b, 2) ) ));
  printf("A distância entre os dois pontos no plano é: \n%d\n", x);
}