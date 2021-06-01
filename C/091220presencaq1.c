#include <stdio.h>
#include <stdlib.h>
int main(){
  int  a, c;
  char sw;
  printf("Insira 1 para For, 2 para While e 3 para Do-While: \n");
  sw = getchar();
  switch (sw){
   case '1':
    for (a = 0; a <= 10; a++)
     c = c +  a;
     printf("For: %d\n", c);
     break;
   case '2':
    while ( a <= 10){
      c = c + a;
      if (a == 10)
        printf("While: %d\n", c);
      a++;
    }
   case '3':
    do{
      c = c + a;
      if (a == 10)
        printf("Do-While: %d\n", c);
      a++;
    }while ( a <= 10);
    
  }
    
}
