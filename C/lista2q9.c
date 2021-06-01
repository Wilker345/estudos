#include <stdio.h>
int main(){
int an = 0, x = 1, pr = 1, cont = 0;
while(cont < 20){
   pr = x + an;
   cont = cont + 1;
   an = x;
   x = pr;
   printf("o termo da %dº posição na progressão fibonacci é %d\n", cont, x);
}
}