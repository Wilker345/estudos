#include <stdio.h>
#include <stdlib.h>
int main(){
 int x, y = 0, z = 0, c = 1;
 while (c == 1){
   printf("Insira o número: (número negativo E par encerra o programa)\n");
   scanf("%d", &x);
   if (x < 0){
     if ((x%2)){
       continue;
     }
     if (!(x%2)){
       printf("O programa foi encerrado: %d é o maior e %d é o menor número inserido\n", y, z);
       break;
      }
    }
   if ( x > y){
     y = x;
   }
   if ( x < z){
     if (!(x ==0)){
       z = x;
     }
   }
 }
}
