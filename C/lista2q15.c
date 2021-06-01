#include <stdio.h>
#include <math.h>
int main(){
  int x=0;
  while (x <= 7){
    printf("3^%d é: %.0f\n",x , pow(3,x));
    x++;
  }
}