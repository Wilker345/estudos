//Defina uma Estrutura para armazenar um par (x,y) de coordenadas. Organize um vetor com 10 elementos dessas Estruturas. Imprima os pontos armazenados sem uso de ponteiros. Gere os valores x e y aleatoriamente. Utilize o typedef e #define.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10 
struct pares{
  int x, y;
};
typedef struct pares q1;
int main(){
  srand(time(NULL));
  int x;
  q1 a[TAM];
  for(x=0; x<TAM; x++){
    a[x].x = rand()%99;
    a[x].y = rand()%99;
  }
  for(x=0; x<TAM; x++){
    printf("\n%dº conjunto do vetor:\nX: %d\nY: %d\n", x+1, a[x].x, a[x].y);
  }
  return 0;
}