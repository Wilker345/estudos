#include <stdio.h>
#include <stdlib.h>
int main(){
  int s, min, h;
printf("Insira a quantidade de s: \n");
scanf("%d", &s);
printf("Insira a quantidade de min: \n");
scanf("%d", &min);
printf("Insira a quantidade de h: \n");
scanf("%d", &h);
s = s + (min*60) + (h * 3600);
printf("A quantidade total de segundos é: %d\n", s);

}