#include <stdio.h>
#include <stdlib.h>
int main(){
  int x, y;
  printf("Insira o número a ser incrementado com '- -':\n");
  scanf("%d", &x);
  printf("x = %d antes de ser incrementado\n", x);
  x--;
  printf("x = %d após ser incrementado de forma póstuma\n", x);
  y = x - 2;
  while(x > y){
    printf("x será pré incrementado em um While até sair do mesmo:\n");
    printf("x = %d\n", x);
    x--;
  }
}