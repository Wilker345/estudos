//Escreva um programa que some todos os elementos de um vetor de inteiros alocado dinamicamente.A quantidade de elementos devem ser fornecidas pelo usu ́ario. Os valores do vetor devem pertencerao intervalo [82, 237]. Utilize a fun ̧c ̃ao rand() para alimentar o vetor com valores pseudo-aleat ́orios.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int *c, f, *pf; // o começo e fim do vetor
  int x, soma;
  srand(time(NULL));
  printf("Insira o tamanho do vetor:\n");
  scanf("%d", pf);
  c = malloc(*pf * sizeof(int));
  if (!c){ //teste pra ver se tem espaço
    printf("Sem memória!\n");
    exit(1);
  }
  //"Inserindo os elementos do vetor
  for(x=0; x < *pf; x++){
    *(c + x) = rand() %(237 - 82 + 1) + 82;
  }
  printf("Este é seu vetor:\n");
  for(x=0; x < *pf; x++){
    printf("%d\n", *(c + x));
  }
  soma = 0;
  for(x=0; x < *pf; x++){
    soma += *(c + x);
  }
  printf("Este é o somatório do vetor:\n%d\n", soma);
free(c);
return 0;
}