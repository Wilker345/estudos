#include <stdio.h>
#include <stdlib.h>
//experimentei transformar o número inteiro em caratere e fiz algumas tentativas sem sucesso
int main (){
  int x;
  char y;
  printf("Insira o número inteiro: \n");
  scanf("%d", &x);
  x = (char)x;
  y = x;
  printf("%c\n", y);
}