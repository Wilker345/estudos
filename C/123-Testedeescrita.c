#include <stdio.h>
#include <stdlib.h>
#define TAM 4
int soma(int, int);
int main(int argc, char *argv[]){
  FILE *arq;
  int k, x[TAM], y[TAM], z[TAM];
  if (!(arq = fopen("ArqTest.txt", "w"))){
    printf("O arquivo não pode ser aberto.\n");
  }
  for(k=0;k<TAM;k++){
    printf("Insira o %dº número para ser somado ao seu dobro:\n", k+1);
    scanf("%d", &x[k]);
    y[k] = 2 * x[k];
    z[k] = soma(x[k], y[k]);
    fprintf(arq, "%dº Caso: %d + %d = %d\n",k +1, x[k], y[k], z[k]);
  }
  fclose(arq);
}
int soma(int a, int b){
  return a + b;
}