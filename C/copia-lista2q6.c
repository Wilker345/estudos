#include <stdio.h>
#include <stdlib.h>
int main(){
  int x, y, t=0, p=0, r=0, b=0, n=0, c = 1;
  while (c==1){
    printf("Insira o seu voto: \n");
    scanf("%d", &x);
    if (x < 0){
      printf("resultado: TOTAL: %d VOTOS\nPAULO: %d VOTOS\nRENATA: %d VOTOS\nBRANCO: %d VOTOS\nNULO: %d VOTOS\n", t, p, r, b, n);
      break;
     }
    if (x == 5){
      printf("Confirmar voto: 1 para sim, 2 para não\n");
      scanf("%d", &y);
      if ( y == 1){
        p++;
      }
     }
      if (y == 2){
        continue;
      }
    if (x == 7){
      printf("Confirmar voto: 1 para sim, 2 para não\n");
      scanf("%d", &y);
      if ( y == 1){
        r++;
      }
     }
      if (y == 2){
        continue;
      }
    if (x == 0){
      printf("Confirmar voto: 1 para sim, 2 para não\n");
      scanf("%d", &y);
      if ( y == 1){
        b++;
      }
     }
      if (y == 2){
        continue;
      }
    else{
      t++;
    }
   }
}