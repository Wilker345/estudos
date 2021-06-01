//valor da hora aula, numero de horas trabalhadas no mes, percentual de desconto do INSS -> salario bruto e liquido
#include <stdio.h>
#include <stdlib.h>
int main(){
  float vha, nhm, des, salb, sall;
  printf("> Insira o valor da hora aula: \n");
  scanf("%f", &vha);
  printf("> Insira o número de horas trabalhadas no mês: \n");
  scanf("%f", &nhm);
  printf("> Insira o percentual de desconto do INSS \n(com números sem símbolo de porcentagem) \n");
  scanf("%f", &des);
  salb = vha * nhm;
  sall = salb - (salb *(des / 100));
  printf("> O salário bruto é: %.2f reais\n", salb);
  printf("> O salário líquido é: %.2f reais\n", sall);
}