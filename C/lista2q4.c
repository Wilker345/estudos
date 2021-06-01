#include <stdio.h>
int main(){
  int x, p, j;
  //p == 110 + 3*x e j ==  150 + 2*x
  // p == j ... 110 + 3*x == 150 + 2*x
  // 3*x - 2*x == 150 - 110 -> x = 40, p > j quando x > 40
  for(x=1; p <= j; x++){
      p = 110 + 3 * x;
      j = 150 + 2*x;
      if (p > j)
       printf("Pedro será maior que josé em %d anos \n", x);
  }
}