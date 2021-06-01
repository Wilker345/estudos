#include <stdio.h>
int main(){
  int x=0, st=0, sc=0;
  while (x <= 200){
    if (x <=100){
      if (!(x%3)){
        st= st + x;
      }
    }
    if (x > 100){
      if (!(x%5)){
        sc= sc + x;
      }
    }
    x++;
  }
  printf("O somatório de todos os números divisíveis por 3 pertencentes ao intervalo [0,100] é: \n%d\nO somatório de todos os números divisíveis por 5 pertencentes ao intervalo [100,200] é: \n%d\n", st, sc);
}