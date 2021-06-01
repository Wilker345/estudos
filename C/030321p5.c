//Exemplifique, com codigo, Enumeraçoes em C.
#include <stdio.h>
int main(){
  enum rgb{vermelho = 61, verde = 27, azul = 35}a;
  printf("Qual cor deseja? Insira o código:\nVermelho: 61\nVerde: 27\nAzul: 35\n");
  scanf("%u", &a);
  printf("\nVocê escolheu a  cor:\n");
  if (a == azul){
    printf("Azul\n");
  }
  if (a == vermelho){
    printf("Vermelho\n");
  }
  if (a == verde){
    printf("Verde\n");
  }
  return 0;
}