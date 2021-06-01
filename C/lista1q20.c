#include <stdio.h>
#include <stdlib.h>
int main(){
  int x;
  printf("> Insira o número: \n");
  scanf("%d", &x);
  while (x%2){
    printf("> %d é ímpar\n", x);
    break;
  }
  while (!(x%2)){
    printf("> %d é par\n", x);
    break;
  }
}