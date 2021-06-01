#include <stdio.h>
#include <stdlib.h>
struct myMatrix{
	int lin;
	int col;
	int *pDados;
	int maiorElem;
};
int MaiorN(int *vetor, int lin, int col);
int main(int argc, char *argv[]){
	struct myMatrix q3;
	int *e;
	if (argc<3){
		printf("Formato: <%s> <n_linhas> <n_colunas>\n", argv[0]);
		exit(1);
	}
	q3.lin = atoi(argv[1]);
	q3.col = atoi(argv[2]);
	e = malloc((atoi(argv[1]) * atoi(argv[2])) * sizeof(int));
  if (!e){ //teste pra ver se tem espaço
    printf("Sem memória!\n");
    exit(1);
  }
  printf("Insira os elementos do vetor:\n");
  for(int c=0; c<(atoi(argv[1]) * atoi(argv[2])); c++){
    scanf("%d", e + c);
  }
	q3.pDados = e;

	/*printf("Esta é sua matriz:\n");
  for(int c=0; c < atoi(argv[1]) * atoi(argv[2]); c++){
    if (c % atoi(argv[2]) == 0){
      printf("\n");
    }
    printf("%d ", *(q3.pDados + c));
  }*/
  q3.maiorElem = MaiorN(e, atoi(argv[1]), atoi(argv[2]));
	printf("Estrutura:\nn_linha: %d\nn_coluna: %d\nponteiro: %p\nMaior Elemento: %d\n", q3.lin, q3.col, q3.pDados, q3.maiorElem);

	free(e);
	return 0;
}
int MaiorN(int *vetor, int lin, int col){
	int maior, anterior = 0;
	maior = *(vetor);
	for(int c=0; c< (lin * col); c++){
		if(*(vetor + c)>anterior){
    maior = *(vetor + c);
		anterior = *(vetor +c);
		}
	}
	return maior;
}
