//Crie uma funcao que receba o nome do arquivo salvo na quest ̃ao anterior e um inteiro q. A funcao deve ler o arquivo e retornar a estrutura salva localizada na posicao q do vetor. Nao precisa criar a funcao main().
#include <stdio.h>
#define TAM 3

struct k{
	int x;
	float y;
};
//int fread(const void *ptr, int size, int n, FILE *arq)
void ques3(char *nome, int q){
  FILE *arq;
	char leu[200];
	arq = fopen(nome, "rb");
	if(arq == NULL){
    printf("Erro ao abrir o arquivo\n");
	}
	fread(leu, sizeof(struct k), TAM, arq);
	fprintf(stdout, "%s",leu);
}
int main(){
	ques3("ques2.txt", 2);
}
