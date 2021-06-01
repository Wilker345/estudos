#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
  int x, n;
  printf("Insira x\n");
  scanf("%d", &x);
  printf("Insira n\n");
  scanf("%d", &n);
  printf("> A equação x * 2^n ( usando AND como multiplicação)vale: \n%d * 2^%d = %d\n",x, n, (int) x & (int)pow(2, n));
}