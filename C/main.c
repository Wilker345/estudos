#include <stdio.h>
#include <stdlib.h>
//prototipo de função
int soma(int, int);
int subtracao(int, int);
//função principal
int main(int argc, char *argv[]){
  int x, y;
  //validação da entrada
  if (argc < 4){
    printf("Formato:\n%s <Nome> <Operação> <Valor1> <Valor2>\n", argv[0]);
    printf("Instrução para <Operação>:\nDigite 1 para soma.\nDigite 2 para subtração.\n");
    exit(1);
  }
  //execução das funções com os argumentos
  printf("Olá, %s!\nTeste do argumento com operações:\n", argv[1]);
  x = atoi(argv[2]);
  if (x==1){
    printf("Resultado da soma: %d\n", soma(atoi(argv[3]), atoi(argv[4])));
  }
  if (x==2){
    printf("Resultado da subtração: %d\n", subtracao(atoi(argv[3]), atoi(argv[4])));
  return 0;
  }
}
//funções de operação
int soma(int a, int b){
  return a + b;
}
int subtracao(int a, int b){
  return a - b;
}
