#include <stdio.h>
#include <stdlib.h>
int main (){
  int a, b, z=1;
  float c;
  while( z == 1){
  printf("Insira o Dividendo: \n");
  scanf("%d", &a);
  printf("Insira o Divisor: \n");
  scanf("%d", &b);
  if (b == 0){
    printf("O divisor não pode ser 0, o programa irá reiniciar.\n");
    continue;
  }
  if (!(b == 0)){
    c = (float) a/b;
    printf("O resultado da divisão é: %.2f\n", c);
    break;
  }
  }

}