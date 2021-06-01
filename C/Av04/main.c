#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"
int main(int argc, char *argv[]){
	int h;
  if (argc < 4){
		printf("Formato: <%s> <valor1> <valor2> <Operacao>\nOp (1): Soma, Op (2): Subtracao\n", argv[0]);
		exit(1);
	}
	if(atoi(argv[3]) == 1){
		h = soma(atoi(argv[1]), atoi(argv[2]));
	}
	if(atoi(argv[3]) == 2){
		h = sub(atoi(argv[1]), atoi(argv[2]));
	}
	else{
		printf("Op inválida\n");
		exit(1);
	}
	printf("Resultado com Op %s: %d\n", argv[3], h);	

return 0;
}
