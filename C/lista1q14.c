#include <stdio.h>
#include <stdlib.h>
int main(){
  float c, f;
  printf("Insira a temperatura em Celsius: \n");
  scanf("%f", &c);
  f = ((9 * c) + 160) / 5;
  printf("Esta é a a temperatura em Fahrenheit: %.2f", f);
  printf("º\n");
  
}