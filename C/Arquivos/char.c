#include<stdio.h>
int main(){
	char arquivo[]="nome.txt";
	char nome[30];
	FILE *registro;

	fprintf(stdout, "Informe seu nome:\n");
	fscanf(stdin, "%s", nome);

	registro = fopen(arquivo, "w");
	fprintf(registro, "%s\n", nome);
	
	fclose(registro);
	return 0;
}