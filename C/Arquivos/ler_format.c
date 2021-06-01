#include<stdio.h>
int main(){
	FILE *arq;
	char list[]="tabela.txt";
	char time[20];
	int gols[2];
	arq = fopen(list, "r");
	while( (fscanf(arq,"%s %d %d\n", time, &gols[0], &gols[1]))!=EOF )
   printf("%s %d %d\n", time, gols[0], gols[1]);
	fclose(arq);
	return 0;
}