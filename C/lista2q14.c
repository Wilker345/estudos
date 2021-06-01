#include <stdio.h>
#include <stdlib.h>
int main(){
  int a, b, s=0, x=0, sw;
  printf("Insira 1 para ordem crescente, 2 para decrescente:\n");
  scanf("%d", &sw);
  switch(sw){
  case 1:
    printf("A -> B\n");
    printf("Insira o inicio da faixa: (menor n)\n");
    scanf("%d", &a);
    x = a;
    printf("Insira o fim da faixa: (maior n) \n");
    scanf("%d", &b);
    while(x < b){
      if (!(x%3)){
        s++;
      }
    x++;
    }
    printf("A quantidade de divisores entre A e B é: %d\n", s);
    break;
  case 2:
    printf("B -> A\n");
    printf("Insira o inicio da faixa: (menor n)\n");
    scanf("%d", &a);
    printf("Insira o fim da faixa: (maior n) \n");
    scanf("%d", &b);
    x = b;
    while(x > a){
      if (!(x%3)){
        s++;
      }
    x--;
    }
    printf("A quantidade de divisores entre A e B é: %d\n", s);
    break;
  }
}