#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanho 5
//a maior palavra do mundo tem 46 letras
int main(){
  char string[tamanho], letra;
  int resultado;
  printf("Insira a string de 5 digitos:\n");
  fgets(string, tamanho, stdin);
  printf("Insira a letra a ser procurada:\n");
  scanf("%c", &letra);
  printf("teste: %s\n", string);
  resultado= strncmp(letra, string, 5);
}