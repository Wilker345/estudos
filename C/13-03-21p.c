//Crie um programa em C que organize e armazene um vetor de estruturas com pontos de coordenadas (x, y) em um arquivo. E crie um outro programa em C que realize a Leitura e a exibição desses dados
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
struct coord{
  int x;
  int y;
};
int main(){
  srand(time(NULL));
  struct coord est[TAM];
  int a;
  FILE *VEs;
  if (!(VEs = fopen("coordenadas.txt", "w"))){
    printf("O arquivo não pode ser aberto.\n");
  }
  for (a=0; a<TAM; a++){
    est[a].x = rand()% 100;
    est[a].y = rand()% 100;
  }
  for(a=0; a<TAM; a++){
    fwrite((est + a), sizeof(struct coord), TAM, VEs);
  }
  fclose(VEs);
  return 0;
}