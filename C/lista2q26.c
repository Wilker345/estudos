#include <stdio.h>
#include <stdlib.h>
int main(){
 int x=1;
   while (x < 257){
    printf("Este é o valor como decimal: %d\n", x);
    printf("Este é o valor  como octal: %o\n", x);
    printf("Este é o valor  como hexadecimal: %x\n", x);
    x++;
   }
}
