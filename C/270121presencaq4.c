//Escreva um programa que leia um vetor do usuário e imprima seus valores e seus enderecos. Teste o vetor com tipos de dados diferentes, analise os enderecos. O que você observou?
#include <stdio.h>
#define tam 4
int main(){
  int c, v[tam] = {};
  int *pv = NULL;
  pv = v;
  printf("Insira os dados do vetor:\n");
  for(c=0; c < tam; c++){
    scanf("%d", (pv + c));
  }
  for(c=0;c<tam;c++){
    printf("endereço: %p | dado do vetor: %d\n", (pv + c), *(pv + c));
  }
  return 0;
}
//OBS para copiar: O endereço dos dados do vetor não progridem necessariamente de 1 a 1, depende do tamanho em bytes do tipo de dado, como 4 a 4 no caso de int.