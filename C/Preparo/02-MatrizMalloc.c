#include <stdio.h>
#include <stdlib.h>
int main(){
  int i, j, id, jd; //linhas e colunas, respectivamente
  int *c;// o ponteiro da matriz
  int x;
  int *t;
  printf("Insira o número de linhas:\n");
  scanf("%d", &i);
  printf("Agora, insira o número de colunas:\n");
  scanf("%d", &j);
  c = malloc((i * j) * sizeof(int));
  if (!c){ //teste pra ver se tem espaço
    printf("Sem memória!\n");
    exit(1);
  }
printf("Insira os elementos do vetor:\n");
for(x=0; x<(i * j); x++){
  scanf("%d", c+x);
}
printf("Esta é sua matriz:\n");
for(x=0; x<(i * j); x++){
  if (x%j == 0){
    printf("\n");
  }
  printf("%d ", *(c+x));
}
printf("\nAgora insira o elemento que você quer procurar.\n");//coloquei isso apenas para guardar a formula: ponteiro + (linha_desejada * n_de_colunas_total) + coluna_desejada
printf("Linha:\n");
scanf("%d", &id);
printf("Coluna:\n");
scanf("%d", &jd);
t = (c +id*j +jd);
printf("O elemento que você procura é: %d\n", *t);
  free(c);
  return 0;
}