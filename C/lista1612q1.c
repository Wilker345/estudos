#include <stdio.h>
#include <stdlib.h>
#define tamanho 15 
int main(){
  int i, soma[tamanho], soma_resultado=0;
  for ( i=0; i<tamanho; i++ )
  {
    printf("Insira o %dº número:\n", i + 1);
     scanf ("%d", &soma[i]);
     soma_resultado = soma_resultado + soma[i];
  }
  printf("Soma: %d\n", soma_resultado);
}