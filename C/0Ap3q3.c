//Crie uma funcao que receba um vetor de Estruturas com dois campos inteiros (x e y) e retorne o endereco da Estrutura com maior distancia entre seus proprios elementos x e y. Para cálculo da distância, considere:
// D(x,y) = |x − y|. Defina a Estrutura.
#include <stdio.h>
#define TAM 3
struct q3{
  int x;
  int y;
};


int *dist(struct q3 a[]){
  int t;
  int d = 0, v;
  int *maiord;
  for(t=0; t < TAM; t++){
   v= a[t].x - a[t].y;
   if (v<0){
     v = -1*v;
    }
   if (v > d){
     d = v;
     maiord = &(a[t].x); 
     // para verificação da função, vou escrever os x e y.
     printf("Peguei o endereço de: (%d, %d)", a[t].x, a[t].y);
    }
  }
  return maiord;
}