#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	char letra;
	FILE *leitura;

  if (argc<2){
	  printf("argc = 2\n");
	  exit(1);
	}

	leitura = fopen(argv[1], "r");
	while( (letra=fgetc(leitura))!= EOF ){
		fprintf(stdout, "%c", letra);
	}
	
	fclose(leitura);
	return 0;
}