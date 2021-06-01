#include <stdio.h>
//°F = °C × 1, 8 + 32
int main(){
  float c = 10, f;
  while(c <= 100 ){
    f = (c*1.8) + 32;
    printf("%.2f graus em Celsius são %.2f graus em Fahrenheit\n", c, f);
    c = c + 10;
  }
}