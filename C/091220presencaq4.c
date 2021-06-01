#include <stdio.h>
#include <stdlib.h>
int main(){
  int x, c = 1;
  printf("Insira 1 para demonstrar o break\n2 para demonstrar o continue\nInsira 3 para confirmar o uso de continue.\n");
  scanf("%d", &x);
  while (c ==1){
    if (x == 1){
      printf("o laço de repetição acabou.\n");
      break;
    }
    
    else if (x == 2){
      printf("O continue fez tudo entrar em looping!!!\n");
      continue;
    }
    if (x == 3){
      printf("Não houve looping!\n");
    }
    printf(" Fim do while !\n");
    break;
}

}
