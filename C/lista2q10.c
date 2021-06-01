#include <stdio.h>
int main(){
int a = 4, b;
while(a < 90){
  if (a > 15){
    b = a * a;
    printf("%d^2 = %d\n", a, b);
  }
a = a + 4; 
}
}