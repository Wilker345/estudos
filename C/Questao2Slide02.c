#include <stdio.h>
int main(){
    int a, b, c;
    a= 3;
    printf("O valor inicial de a eh: %d\n", a );
    b= 2;
    printf("O valor inicial de b eh: %d\n", b );
    c = a;
    a = b;
    b = c;
    printf("O valor final de a eh: %d\n", a);
    printf("O valor final de b eh: %d\n", b);
}