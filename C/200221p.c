#include <stdio.h>
#include <stdlib.h>
//prototipos
int soma(int, int);
int sub(int, int);
//principal
int main(int argc, char *argv[]){
  int  x;
  int (*p)(int, int);
  if (argc < 3){
    printf("Formato:\n%s <Op> <Valor1> <Valor2>\nDigite 1 para Op.Soma, 2 para Op.Sub\n", argv[0]);
    exit(1);
  }
  if (atoi(argv[1]) == 1){
    p = soma;
  }
  if (atoi(argv[1]) == 2){
    p = sub;
  }
  x = p(atoi(argv[2]), atoi(argv[3]));
  printf("Resultado: %d\n", x);
return 0;
}
//funcoes
int soma(int a, int b){
  return a+b;
}
int sub(int a, int b){
  return a-b;
}
