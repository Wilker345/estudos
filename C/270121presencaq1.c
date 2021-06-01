#include <stdio.h>
int main(){
  int a, b, c, *ap, *bp, *cp;
  ap = &a, bp = &b, cp = &c;
  printf("Insira o 1º número:\n");
  scanf("%d", ap);
  printf("Agora, o 2º número:\n");
  scanf("%d", bp);
  c = *ap + *bp;
  printf("----\nSoma: %d\nLocal da memória: %p\n", *cp, cp);
  return 0;
}