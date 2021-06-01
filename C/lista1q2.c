#include <stdio.h>
#include <stdlib.h>
int main(){
  int x;
  printf("Insira o valor: \n");
  scanf("%d", &x);
  printf("Este é o valor inserido como octal: %o\n", x);
  printf("Este é o valor inserido como hexadecimal: %x\n", x);

}