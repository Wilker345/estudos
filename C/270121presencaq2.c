#include <stdio.h>
int main(){
  int a, b, *ap, *bp;
  ap = &a, bp = &b;
  printf("Insira o valor de a:\n");
  scanf("%d", &a);
  printf("agora, o valor de b:\n");
  scanf("%d", &b);
  printf("Valor inicial de 'a' e 'b', respectivamente:\n%d e %d\n", *ap, *bp);
  *bp = *bp + *ap;
  *ap = *bp - *ap;
  *bp = *bp - *ap;
  printf("----\nValor final de 'a' e 'b', respectivamente:\n%d e %d\n", *ap, *bp);
  return 0;
}