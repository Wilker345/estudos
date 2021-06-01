#include<stdio.h>
#include<stdlib.h>
int main(){
  float h;
  char ch;
  float p;
  printf("Insira a sua altura: \n");
  scanf("%f", &h);
  printf("Insira 1 caso seja Homem, ou 2 caso seja mulher\n");
  scanf("%s", &ch);
  switch(ch){
    case'1':
    p = 72.7 * h - 58;
    printf("O seu peso ideal eh: %.1f \n", p);
    break;
    case'2':
    p = 62.1 * h - 44.7;
    printf("O seu peso ideal eh: %.1f \n", p);
  }

}