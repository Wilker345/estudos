//Gere um vetor X de elementos inteiros pseudo-aleatórios no intervalo [-N, N], com N dado pelo usuário. A quantidade de elementos deve ser fornecida pelo usuário por linha de comando. Gere um vetor Y da seguinte forma: os elementos de Y com  ́ındice par receberão os respectivos elementos de X divididos por 2; os elementos com  ́ındice  ́ımpar receberão os respectivos elementos de X multiplicados por 3. Escrever o vetor X e Y
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int *c, *cb, f, x, limite;
  srand(time(NULL));
  printf("Insira o tamanho do vetor:\n");
  scanf("%d", &f);
  c = malloc(f * sizeof(int));
  cb = malloc(f * sizeof(int));
  if (!c){
    printf("Sem memória!\n");
    exit(1);
  }
  printf("Insira o N para o intervalo [-N, N].\n");
  scanf("%d", &limite);
  for(x=0; x < f; x++){
    *(c + x) = rand() %(limite - (-limite) + 1) + (-limite);
  }
  for(x=0; x < f; x++){
    if (x == 0){
      *(cb + x)= (float)*(c + x)/2;
    }
    if (x != 0){
      if (x%2 == 0){
        *(cb + x)= (float)*(c + x)/2;
      }
      if (x%2 !=0){
        *(cb + x)= *(c + x)*3;
      }     
    }
  }
  printf("Matriz x:\n");
  for(x=0; x<f; x++){
    printf("%d ", *(c+x));
  }
  printf("\nMatriz y:\n");
  for(x=0; x<f; x++){
    printf("%d ", *(cb+x));
  }
  printf("\n");
  free(c);
  return 0;
}