//Escreva um programa que solicite iterativamente um n ́umero do usu ́ario e imprima sempre o menor valor fornecido. Crie um crit ́erio para finaliza ̧c ̃ao do programa. Utilize ponteiros. 
#include <stdio.h>
int main(){
  int a = 0, b, *ap, *bp;
  ap= &a, bp= &b;
  printf("Insira o número:\n(Número negativo encerra o programa.)\n");
  do{
    scanf("%d",bp);
    if (!(*bp < 0)){
      if (*bp < *ap){
        printf("Menor termo inserido: %d\n", *bp);
      }
    }
    *ap = *bp;
  }while (*bp > 0);
  printf("Programa encerrado.\n");
  return 0;
}
//270121presencaq3.e