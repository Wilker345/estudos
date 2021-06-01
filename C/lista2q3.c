#include <stdio.h>
#include <stdlib.h>
int main(){
int valor, fatorial = 1;
printf("Entre com um número para saber o fatorial: \n");
scanf("%d", &valor);
while (valor > 1){
 fatorial = fatorial * valor;
 valor = valor - 1;
}
printf("O fatorial é %d\n", fatorial);
}