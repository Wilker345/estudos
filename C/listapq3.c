#include <stdio.h>
#include <stdlib.h>
int main(){
  int x, z;
  char y;
  printf("Insira o valor: \n");
  scanf("%d", &x);
  z = x%2? 100 : 200;
  if (z == 100){
    printf("'%d' é ímpar\n", x);
  }
  if (z == 200){
    printf("'%d' é par\n", x);
  }
}