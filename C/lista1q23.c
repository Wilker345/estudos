#include <stdio.h>
#include <stdlib.h>
int main(){
  int x, y, z;
  printf("Insira o número de três dígitos: (Enter para cada dígito) \n");
  scanf("%d%d%d", &x,&y,&z);
  printf("O número 'invertido' é: %d%d%d\n", z, y, x);
}