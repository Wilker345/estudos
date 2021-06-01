//5. Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros.
#include <stdio.h>
#include <string.h>
#define t 0
#define lim 99
int main(){
  char s[t];
  char *ps;
  ps = s;
  printf("Insira a string:\n");
  fgets(s, lim, stdin);
  printf("O vetor, string, do programa tem %ld bytes\n", strlen(ps));
  return 0;
}