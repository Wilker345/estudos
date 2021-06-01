#include <stdio.h>
// não consegui fazer funcionar
int main(){
int valor, fatorial = 1, c = 1;
printf("Fatorial dos valores de 1 a 10: \n");
while(c<11){
  valor = c;
  if (valor == 1){
    printf("O fatorial de 1 é 1\n");
  }
  if (valor > 1){ 
    for (;valor > 1; valor--)
    fatorial = fatorial * valor;
    valor = valor - 1;
  }
  printf("O fatorial de %d é %d\n", c, fatorial);
  c++;
}
}