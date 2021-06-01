#include <stdio.h>
#include "prototipo.h"
int main(){
  //Este programa simula a probabilidade de uma moeda cair cara ou coroa com um número aleatório gerado de 0 a 100, sendo "cara" para valor<=49 e "coroa" >=50
  int moeda = jogar(); 
  if(moeda <= 49){
    printf("Cara\n");
  }
  if(moeda >= 50){
    printf("Coroa\n");
  }
return 0;
}
