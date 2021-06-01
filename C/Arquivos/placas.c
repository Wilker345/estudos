#include <stdio.h>
#include <stdlib.h>
int main(){
	char mod[20], pla[10];
	FILE *arq;
	fprintf(stdout,"Insira o modelo do veículo:\n");
	scanf("%s", mod);
	fprintf(stdout, "Insira a placa do veículo:\n");
	scanf("%s", pla);
	arq = fopen("carro.txt", "w");
	fprintf(arq, "Modelo: %s\nPlaca: %s\n", mod, pla);
  return 0;
}
