//6. Escreva um programa que copie uma string para outra usando ponteiros.
#include <stdio.h>
#include <string.h>
#define t 0
#define lim 99
int main(){
  char s[t];
  char s2[]="A string foi copiada";
  char *ps;
  char *ps2;
  ps = s;
  ps2 = s2;
  printf("Insira a string:\n");
  fgets(s, lim, stdin);
  strcpy(ps2, ps);
  printf("----\n%s\n", ps);
}