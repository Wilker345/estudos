#include <stdio.h>
#include <stdlib.h>
int main (){
  int x;
  printf("Insira a variável: \n");
  scanf("%d", &x);
  printf("O antecessor da variável é: %d\n", x - 1);
  printf("O sucessor da variável é: %d\n", x + 1);

}