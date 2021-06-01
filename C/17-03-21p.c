//1. Implemente um código em C que gere uma matriz com valores aleatórios no intervalo de [0, 255] e dimensões M x N. Crie uma função para salvar a matriz gerada em um arquivo (texto) no padrão de formato PGM.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 2
#define N 4
void escrever(int *x);
int main(){
  int *ma;
  ma = malloc((M * N) * sizeof(int));
  if (!ma){ //teste pra ver se tem espaço
    printf("Sem memória!\n");
    exit(1);
  }
  escrever(ma);
  free(ma);
  return 0;
}
void escrever(int *x){
  srand(time(NULL));
  int c;
  FILE *arq;
  arq = fopen("matriz.pgm", "w");
  for(c=0; c<(M *N); c++){
    *(x + c) = rand()%255;
  }
  for(c=0; c<(M*N); c++){
    if (c%N == 0){
      fprintf(arq, "\n");
    }
    fprintf(arq, "%d ", *(x + c));
  }
}