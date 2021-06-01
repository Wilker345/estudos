#include <stdio.h>
int main(){
  int contagem=0;
  for (; contagem < 10; contagem++){
    int z=1;
    static int x_static=1;
    printf("variavel static :%d", x_static);
    printf(" variavel nao-static: %d\n", z);
    z++, x_static++;
  }
}