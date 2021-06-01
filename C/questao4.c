#include <stdio.h>
int main(){
  int a,b;
  float c;
  printf("Insira o 1 número");
  scanf("%d", &a);
  printf("Insira o 2 número");
  scanf("%d", &b);
  c = a/b ; // vc esta fazendo divisao de inteiros, logo o resultado é inteiro. Dica: use casts. 
  printf("%.2f\n", c); // A função print nao utiliza recebe endereço da variável. Portanto, vc não pode usar &c, mas apenas c. Ou seja, printf precisa apenas do valor. 
  return 0;
  }
