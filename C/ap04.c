#include <stdio.h>
#include <stdlib.h>
#define x 1024
#define y 768
int main(){
  int t, a, b, c=0, matriz[x][y], matriz_binaria[x][y];
  printf("Forneça o Limiar T:\n");
  scanf("%d", &t);

  // MUITO CÓDIGO REPETIDO.. SERIA INTERESSANTE EVITAR.
  for (a=0; a<x; a++){
    for (b=0; b<y; b++){
      if (c < t){
        matriz[a][b]=c;
        matriz_binaria[a][b]=0;
      }
      if (c > t){
        matriz[a][b]=c;
        matriz_binaria[a][b]=1;
      }
      c++;
    }  
  }
  printf("A matriz sofreu o processo de binarização.\n");
}