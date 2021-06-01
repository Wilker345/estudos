#include <stdio.h>
#include <stdlib.h>
int main(){
  int x, y;
  printf("> Insira o 1º número: \n");
  scanf("%d", &x);
  printf("> Insira o 2º número: \n");
  scanf("%d", &y);
  while (x%y){
    printf("> %d não é múltiplo de %d\n", x, y);
    break;
  }
  while (!(x%y)){
    printf("> %d é múltiplo de %d\n", x, y);
    break;
  }
}