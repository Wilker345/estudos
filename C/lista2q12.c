#include <stdio.h>
#include <stdlib.h>
int main(){
  int a, b, c = 1;
  printf("Insira o número: \n");
  scanf("%d", &a);
  printf("Insira o valor da maior multiplicação da tabuada\n");
  scanf("%d", &b);
  while (c <= b){
  printf("%d x %d = %d\n", a, c, a*c);
  c++;
  }
}