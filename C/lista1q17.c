//sem if
#include <stdio.h>
#include <stdlib.h>
int main(){
  int x;
  printf("> Insira o número: \n");
  scanf("%d", &x);
  while(x >= 0){
    printf("> O Módulo do número %d é: |%d| = %d\n", x, x, x);
    break;
  }
  while(x < 0){
    printf("> O Módulo do número %d é: |-%d| = %d\n", x, (-1 * x), (-1 * x));
    break;
  }
}