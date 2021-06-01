//para contabilizar presença na aula do dia 13/02/2021, escreva uma função em C que gere números aleatórios do tipo float. 
#include <stdio.h>
#include <stdlib.h>
//função geradora de floats
float gerador(){
  return (rand() %100)*1.1;
}
int main(){
  float *c; // o começo e fim do vetor
  int x, f;
  printf("Insira o tamanho do vetor:\n");
  scanf("%d", &f);
  c = malloc(f * sizeof(int));
  if (!c){ //teste pra ver se tem espaço
    printf("Sem memória!\n");
    exit(1);
  }
  //Inserindo os elementos tipo float do vetor
  for (x=0; x<f; x++){
    *(c + x) = gerador(); 
  }
  printf("Vetor gerado:\n");
  for (x=0; x<f; x++){
    printf("%.1f\n", *(c + x)); 
  }
  free(c);
  return 0;
}
