//Escreva um programa em C que receba dois vetores de inteiros A[1..k] e B[1..m] do usu ́ario. As dimens ̃oes k e m devem ser obtidas por linha de comando. Crie um vetor C[1..l] com os elementos de A ∩ B. Se A ∩ B = não existe, ent ̃ao um informativo deve ser impresso.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]){
  int *a, *b, *c;
  int x, y, soma;
  srand(time(NULL));
  if (argc < 3){
    printf("Formato:\n%s <TamVetor1> <TamVetor2>\n", argv[0]);
    exit(1);
  }
  a = malloc(atoi(argv[1]) * sizeof(int));
  if (!a){
    printf("Sem memória para v1!\n");
    exit(1);
  }
  for(x=0; x < atoi(argv[1]); x++){
    *(a + x) = rand() %(100 - 1 + 1) + 1;
  }
  printf("Este é seu 1º vetor:\n");
  for(x=0; x<atoi(argv[1]); x++){
    printf("%d\n", *(a+x));
  }
  b = malloc(atoi(argv[2]) * sizeof(int));
  if (!b){
    printf("Sem memória para v2!\n");
    exit(1);
  }
  for(x=0; x < atoi(argv[2]); x++){
    *(b + x) = rand() %(100 - 1 + 1) + 1;
  }
  printf("Este é seu 2º vetor:\n");
  for(x=0; x<atoi(argv[2]); x++){
    printf("%d\n", *(b+x));
  }
  c = malloc(( atoi(argv[1]) + atoi(argv[2])) * sizeof(int));
  for(x=0; x< atoi(argv[1]+atoi(argv[2]));x++ ){
    for (y=0; y< atoi(argv[1]+atoi(argv[2]));y++ ){
      if ( *(a + x) == *(b + y) ){
      *(c + x) = *(a + x);
      }
    }
  }
  soma = 0;
  for(x=0; x<( atoi(argv[1]) + atoi(argv[2]) ); x++){
    soma = soma + *(c + x);
  }
  if (soma == 0){
    printf("Não há interseção!\n");
    return 1;
  }
  if (soma !=0){
    printf("Este é seu vetor C:\n");
    for(x=0; x<( atoi(argv[1]) + atoi(argv[2]) ); x++){
      printf("%d\n", *(c+x));
    }
  }
free(a), free(b), free(c);
return 0;
}