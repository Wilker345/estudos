#include<stdio.h>
int main(){
	FILE *arq;
	char list[]="tabela.txt";
	arq = fopen(list, "w");
	fprintf(arq, "%s: %d %d\n%s: %d %d\n", "flamengo", 1, 2, "ceara", 3, 0);
	fclose(arq);
	return 0;
}