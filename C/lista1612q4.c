#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define tamanho 3 
int main(){
  int i, matriz[tamanho], aritm, geom;
  for ( i=0; i<tamanho; i++ )
  {
    printf("Insira o %dº número:\n", i + 1);
     scanf ("%d", &matriz[i]);
  }
  aritm= (matriz[0]+matriz[1]+matriz[2])/3;
  geom= pow((matriz[0]+matriz[1]+matriz[2]), 1.0/3);
  printf("Média Aritmética: %d\n", aritm);
  printf("Média Geométrica: %d\n", geom);
}