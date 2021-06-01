//Crie uma funcao que receba um vetor de Estruturas com dois campos: x (inteiro) e y(float). A funcao deve salvar o vetor recebido em um arquivo (bin ́ario). Crie a struct. N ̃ao precisa criar a fun ̧c ̃ao main().
#include <stdio.h>
#define TAM 3

struct k{
	int x;
	float y;
};

void ques2(struct k *m){
  FILE *arq;
	arq = fopen("ques2.txt", "w+b");
	if(arq == NULL){
    printf("Erro ao abrir o arquivo\n");
	}
	//fprintf(arq, "%d %f", m[c].x, m[c].y);
	fwrite(m, sizeof(struct k), TAM, arq);
	fclose(arq);
}

void ques3(char *nome, int q){
  FILE *arq;
	arq = fopen(nome, "rb");
	if(arq == NULL){
    printf("Erro ao abrir o arquivo\n");
	}
	fread(nome, sizeof(struct k), TAM, arq);
	fprintf(stdout,"Estrutura:\nx: %d\ny:%.2f\n", m[q].x, m[q].y);
	fclose(arq);
}

int main(){
	struct k teste[TAM];
	teste[0].x = 4;
	teste[0].y = 2.5;
	teste[1].x = 1;
	teste[1].y = 3.4;
	teste[2].x = 6;
	teste[2].y = 7.3;
	ques2(teste);
	ques3("quest2.txt", 2);
}