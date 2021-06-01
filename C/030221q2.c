//Escreva um programa que imprima a diagnonal principal de uma matriz NxN de inteiros, dado que N  ́e fornecida pelo usu ́ario. Os valores de N devem ser aleat ́orios e estar contidos no intervalo [-200, 200].
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(){
  int i, j; //linhas e colunas, respectivamente
  int *c;// o ponteiro da matriz
  int x, raiz;
  srand(time(NULL));
  printf("Insira o N inteiro da matriz quadrada NxN:\n");
  scanf("%d", &i);
  j = i;
  c = malloc((i * j) * sizeof(int));
  if (!c){ //teste pra ver se tem espaço
    printf("Sem memória!\n");
    exit(1);
  }
//Inserindo os elementos do vetor
for(x=0; x < (i * j); x++){
  *(c + x) = rand() %(200 - (-200) + 1) + (-200);
}
printf("Esta é sua matriz:\n");
for(x=0; x<(i * j); x++){
  if (x%j == 0){
    printf("\n");
  }
  printf("%d ", *(c+x));
 }
printf("\n");
printf("Esta é sua diagonal principal:\n");
for(x=0; x<(i * j); x++){
  raiz = sqrt(x);
  if (raiz % 1 == 0 ){
    printf("%d\n", *(c + x));
  }
}
free(c);
return 0;
}