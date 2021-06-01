//Escreva uma fun ̧c ̃ao em C que receba o ponteiro para um vetor de inteiros V e um n ́umero X tamb ́em inteiro. A fun ̧c ̃ao deve retornar o endere ̧co da primeira ocorrˆencia de X em V.
#include<stdio.h>
#define tam 10 //presumindo a aplicação em um programa qualquer de vetor com tamanho qualquer (10 apenas para exemplo)
int funcao(int *a, int b){
  int x;
  for(x=0; x< tam; x++){
     if (*(a + x) == b)
     return (x + 1);//para retornar o endereço da posição de 1 ocorrência
  }
}