#include <stdio.h>
#include <stdlib.h>
int main(){
  int a, b;
  float c;
  printf("Insira o primeiro número: \n");
  scanf("%d", &a);
  printf("Insira o segundo número: \n");
  scanf("%d", &b);
  c = (float)a/b;
  printf("_______\n%.2f\n", c);
}