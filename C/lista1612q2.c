#include <stdio.h>
#include <stdlib.h>
#define tamanho 15
int main(){
  float matriz[tamanho], menor=0;
  int i;
  for (i=0; i<tamanho; i++){
    printf("Insira o %dº número:\n", i+1);
    scanf("%f", &matriz[i]);
    if (matriz[i] < matriz[i-1]){
      menor = matriz[i];
    }
  }
  printf("O menor número foi: %.2f\n", menor);
}