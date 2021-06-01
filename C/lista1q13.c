#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b, c;
    printf("Insira o valor inicial de 'a': \n");
    scanf("%d", &a);
    printf("Insira o valor inicial de 'b': \n");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("O valor final de 'a' eh: %d\n", a);
    printf("O valor final de 'b' eh: %d\n", b);

}