//Escreva um programa em C que organize em um vetor V os endere ̧cos do menor e do maior elemento de uma matriz M com dimensoes alocadas dinamicamente.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int i, j, maior, menor;
  int *c, *pmaior, *pmenor, *v;
  int x;
  srand(time(NULL));
  printf("Insira o número de linhas:\n");
  scanf("%d", &i);
  printf("Agora, insira o número de colunas:\n");
  scanf("%d", &j);
  c = malloc((i * j) * sizeof(int));
  if (!c){
    printf("Sem memória!\n");
    exit(1);
  }
  for(x=0; x<(i * j); x++){
  *(c+x) = rand() %(100 - 1 + 1) + 1;
  }
  printf("Esta é sua matriz:\n");
  for(x=0; x<(i * j); x++){
    if (x%j == 0){
      printf("\n");
    }
  printf("%d ", *(c+x));
  }
maior = *(c + 0);
menor = *(c + 0);
for (x = 0; x < (i*j); x++) {
  if (*(c + x)  > maior){
    maior = *(c + x);
  }
  if (*(c +x) < menor){
    menor = *(c + x);
  }
*(v + 0)= maior;
*(v +1) = menor;

}
printf("Esse é o vetor com o endereço do maior (%d) e menor (%d) número, respectivamente:\n%d\n%d\n", maior, menor, *pmaior, *pmenor);
free(c);
return 0;
}