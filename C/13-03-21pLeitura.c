#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#define ARQUIVO argv[1]
struct coord{
  int x;
  int y;
};
int main(int argc, char *argv[]){
  char a;
  int k;
  struct coord b[TAM];
  if (argc < 2){
    printf("Formato: <%s> <Nome_Arquivo>\n", argv[0]);
    exit(1);
  }
  FILE *arq;
  if (!(arq = fopen(ARQUIVO, "r"))){
    printf("O arquivo não pode ser aberto.\n");
    exit(1);
  }
//leitura
  for(k=0;k<TAM;k++){
    fread((b+k), sizeof(struct coord), TAM, arq);
  }
  //while((a=fgetc(arq))!= EOF){
    //putchar(a);
  //}

  //escrita
  for(k=0;k<TAM;k++){
    printf("%dºEstrutura: X: %u | Y: %u\n",k+1, (b+k)->x, (b+k)->y);
  }
  fclose(arq);
  return 0;
}