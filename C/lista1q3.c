#include <stdio.h>
#include <stdlib.h>
int main(){
double x;
printf("Escreva um valor real: \n");
scanf("%lf", &x);
printf("Este é x, com apenas uma casa decimal: %.1f\n", x);
}