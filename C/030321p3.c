//Modifique os programas anteriores para que agora tenhamos um vetor de Nodes. Utilize a diretiva define para definir a quantidade de elementos.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM atoi(argv[1]) 
struct node{
  int x, y;
};
typedef struct node q3;
int main(int argc, char *argv[]){
  if (argc < 2){
    printf("Formato:\n%s <Tamanho do vetor>\n", argv[0]);
    exit(1);
  }
  srand(time(NULL));
  int x;
  q3 a[TAM], *z;
  for(x=0; x<TAM; x++){
    z = a;
    (z + x)->x = rand()%99;
    (z + x)->y = rand()%99;
    printf("\n%dº conjunto do vetor:\nX: %d\nY: %d\n", x+1, (z + x)->x, (z + x)->y);
  }
  return 0;
}