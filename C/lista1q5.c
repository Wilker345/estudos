#include <stdio.h>
int main(){
  float x;
  printf("Insira o a conta do restaurante: \n");
  scanf("%f", &x);
  x = x * 1.1;
  printf("O preço a ser pago após adicionar 10 por cento do valor pago eh: %.2f\n", x);

}