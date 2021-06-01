#include <stdio.h>
#include <stdlib.h>
int main(){
  int x, y, u, d, c, m, dezm, restos;
  printf("Insira o número de 5 digitos: \n");
  scanf("%d", &x);
  u = x/10000;
  restos = x%10000;
  d = restos/1000;
  restos = restos%1000;
  c = restos/100;
  restos = restos%100;
  m = restos/10;
  dezm = restos%10;
  y = (10000*dezm) + (1000*m) + (100* c) + (10*d) + (u);
  printf("o invertido é: %d\n", y);
  if (x==y){
    printf("Palindromo\n");
  }
  if (!(x==y)){
    printf("Não é palindromo\n");
  }
}