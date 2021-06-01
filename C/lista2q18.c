#include <stdio.h>
int main(){
  double x = 1, soma = 0; 
  int c = 1;
  while(c <= 64){
    soma = soma + x;
    x = x *2;
    c++;
  }
  printf("O somatório de grãos nos %d quadros é\n%.0f\n", c - 1, soma);
}