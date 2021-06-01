#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
  float x, y, z;
  
  // PENSA SE NAO DAR PRA TROCAR ESSE WHILE E c POR OUTRA ESTRUTURA MELHOR. TA ESTRANHO. PODE MELHORAR AQUI. 
  int c=1;
  while (c<2){
    printf("Sabendo que o ponto pertence a figura H se, e apenas se,\nx^2 + y^2 <= 1, com x e y >= 0. \n");
    printf("Declare o eixo x:\n");
    scanf("%f", &x);
    printf("Declare o eixo y:\n");
    scanf("%f", &y);
    z = pow(x,2)+pow(y,2);
    if (z <= 1){
      printf("O ponto %.2f pertence a H\n", z);
      printf("Insira 1 para inserir outro ponto\nInsira 2 para encerrar o programa.\n");
      scanf("%d", &c);
    }
    if (z > 1){
      printf("O ponto %.2f não pertence a H\n", z);
      printf("Insira 1 para inserir outro ponto\nInsira 2 para encerrar o programa.\n");
      scanf("%d", &c);
    }
  }
}


/* algumas observações.
1. esse controle de c com o while pode melhorar.
2. dica: evite códigos repetidos. Pensa em como eliminar a duplicidade da linha 18 e 23 (printf).
3. Codição do problema x>=0 e y>=0, seria interessante tratar. 


*/
//quanto a osbervação 2: Acabei não criando condições no programa sobre o x > 0 e y >0 pois supus que caso um dos dois ou ambos fossem <0, z já seria invalido