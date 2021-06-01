#include <stdio.h>
#include <stdlib.h>
int main(){
  int a, b, c=0, i, j, n; 
  double dif=0, MAE;
  printf("Insira a dimensão n das matrizes:\n");
  /* isso aqui, não se faz */
  scanf("%d", &i);
  scanf("%d", &j);
  n = i * j;
  int matriz_A[i][j], matriz_B[i][j];
  /****/
  //para a demonstração do código, farei os elementos de matriz_b irem de 0 a 9.
  for (a=0; a<i; a++){
    for (b=0; b<j; b++){
      if (c < n){
        printf("Insira o elemento da matriz A");
        scanf("%d", matriz_A[a][b]); // TA CERTO ISSO?
        c++;
      }
    }
  }
  for (a=0; a<i; a++){
    for (b=0; b<j; b++){
      if (c < n){
        matriz_B[a][b]= c;
        c++;
      }
    }
  }
  for (a=0; a<i; a++){
    for (b=0; b<j; b++){
      if (c < n){
        dif= dif + (double)(matriz_A[a][b]-matriz_B[a][b]);
        MAE= (double)dif/n;
      }
    }
  }
  printf("o MAE é : %f", MAE);
}