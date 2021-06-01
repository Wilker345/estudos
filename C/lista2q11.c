#include <stdio.h>
#include <stdlib.h>
//presumo que o ''11'' era na verdade ''10''
//por algum motivo que não sei, o algoritmo ainda funciona 2 vezes na escolha crescente, não consegui consertar (porém FUNCIONAL)
int main(){
int a, af = 0, b, c, d;
char sw;
printf("Insira 1 para um intervalo crescente, 2 para decrescente: \n");
sw = getchar();
switch (sw){
case '1':
  
  printf("Insira o número a ser desenvolvido:\n");
  scanf("%d", &a);
  printf("Insira o inicio do intervalo (menor número):\n");
  scanf("%d", &c);
  printf("Insira o fim do intervalo (maior número):\n");
  scanf("%d", &d);
  while(af < d){
    if (af > d){
    break;
    }
    if (af > c)
    {
      b = af * af;
      printf("%d^2 = %d\n", af, b);
      }
    
  af = af + a; 
  }
case '2':
  
  printf("Insira o número a ser desenvolvido:\n");
  scanf("%d", &a);
  printf("Insira o inicio do intervalo (maior número):\n");
  scanf("%d", &c);
  af = c;
  printf("Insira o fim do intervalo (menor número):\n");
  scanf("%d", &d);
  while(af > d){
    if (af < c){
      if (!(af%a)){
        b = af * af;
        printf("%d^2 = %d\n", af, b);
      }
    }
    
  af--; 
  
}
}
}
