#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
  int x;
  printf("Insira a variável do algoritmo: \n");
  scanf("%d", &x);
  int tr_x = 3 * x;
  double qu_x = pow(x, 2);
  float div_x = ((float)x / 2);
  printf("O triplo da variável é: 3*%d", x);
  printf(" = %d \n", tr_x);
  printf("O quadrado da variável é: %d", x);
  printf("^2 = %.0f\n", qu_x);
  printf("O meio da variável é: %d", x);
  printf("/2 = %.2f\n", div_x);
  
}