#include <stdio.h>
int main(){
  int c=0;
  for (; c < 10; c++){
    //duas variaveis foram declaradas dentro do for, mas apenas a static, que guarda seu proprio valor, consegue manter o incremento
    int z=1;
    static int x=1; // ENTENDI O QUE QUIZ FAZER. MAS NÃO DECLARE VARIÁVEIS DENTRO DE LACOS DE REPETIÇÃO. DECLARE SEMPRE NA PARTE SUPERIOR DO COD/FUNC.
    printf("x :%d", x);
    printf(" z: %d\n", z);
    z++, x++;
  }
}
