#include <stdio.h>
#include <stdlib.h>
int main(){
  int x, c = 1;
  while (c == 1){
    printf("Insira o número para determinar o dia da semana:\n");
    scanf("%d", &x);
    if ( x == 1 ){
    printf("Domingo\n");
    }
    if ( x == 2 ){
    printf("Segunda-Feira\n");
    }
    if ( x == 3 ){
    printf("Terça-Feira\n");
    }
    if ( x == 4 ){
    printf("Quarta-Feira\n");
    }
    if ( x == 5 ){
    printf("Quinta-Feira\n");
    }
    if ( x == 6 ){
    printf("Sexta-Feira\n");
    }
    if ( x == 7 ){
    printf("Sábado\n");
    }
    if (x == 0){
    printf("O programa foi encerrado.\n");
    break;
    }
    if ( x > 7 ){
      printf("Número de dia não valido\n");
    }
    if ( x < 0 ){
      printf("Número de dia não valido\n");
    }
  }
}