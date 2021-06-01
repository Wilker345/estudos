#include <stdio.h>
#include <stdlib.h>
int main(){
int x;
char sw;
printf("Insira 1 para o loop com for, 2 para o loop com while: ");
sw =getchar();
switch(sw){
case '1':
  for (x=1;;x++)
  //não há condição de saída
  printf("%d", x);
case '2':
  while(x > (x - 1)){
  //x sempre será maior que (x - 1), logo irá continuar eterno
  x++;
  printf("%d", x);
  }

}

}