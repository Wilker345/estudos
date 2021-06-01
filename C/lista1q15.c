#include <stdio.h>
#include <stdlib.h>
int main(){
  int d;
  float s, sfinal;
  printf("Insira a quantidade de dias trabalhados: \n");
  scanf("%d", &d);
  if (d <= 10){
    s = 50.25 * d;
    s = s * 0.9;
    printf("O valor líquido a ser pago, após o imposto é: %.2f\n", s);

  }
  else if (d <= 20){
    s = 50.25 * d;
    sfinal = (s * 0.9) + (s * 0.2);
    printf("O valor líquido a ser pago, após o imposto é: %.2f\n", sfinal);

  }
    else if (d > 20){
    s = 50.25 * d;
    sfinal = (s * 0.9) + (s * 0.3);
    printf("O valor líquido a ser pago, após o imposto é: %.2f\n", sfinal);
    
    }
    
}