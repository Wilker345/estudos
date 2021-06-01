#include <stdio.h>
#include <stdlib.h>
int main (){
  int h, c, l, v;
  printf("Insira a altura da caixa: \n");
  scanf("%d", &h);
  printf("Insira a largura da caixa: \n");
  scanf("%d", &l);
  printf("Insira o comprimento da caixa: \n");
  scanf("%d", &c);
  v = c * l * h;
  printf("o volume da caixa é: %d\n", v);

}