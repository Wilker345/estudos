//Escreva um programa em C que gere um vetor com n ́umeros aleat ́orios e calcule sua media. Organize uma Estrutura com as seguintes informac̃oes: ponteiro para a matriz, quantidade de elementos e a media.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define tam 5
struct q3{
  int *m;
  int qt;
  float med;
};
int main(){
  struct q3 A;
  int m[tam], *pm, qm, x;
  float media;
  srand(time(NULL));
  pm = m;
  for(x=0; x < tam; x++){
    *(pm + x) = rand()%20; 
  }
  printf("Vetor aleatório:\n");
  for(x=0; x < tam; x++){
    media += *(pm + x);
    printf("%d\n", *(pm+x));
  }
  media = media/tam;
  //colando na Estrutura:
  A.m = pm, A.qt = tam, A.med = media;
  printf("\nEstrutura:\n\nPonteiro: %p\nQuantidade: %d\nMédia: %.2f\n", A.m, A.qt, A.med);
}