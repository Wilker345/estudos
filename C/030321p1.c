//Escreva um programa que crie uma Estrutura Node com dois campos (x, y) do tipo inteiro. Realize a leitura e exibição dos dados dessa Estrutura utilizando um ponteiro para essa estrutura.
#include <stdio.h>
struct node{
  int x, y;
};
typedef struct node q1;
int main(){
  q1 a, *z;
  z = &a;
  z->x = 5;
  z->y = 4;
  printf("Teste:\nX: %d\nY: %d\n", z->x, z->y);
  return 0;
}