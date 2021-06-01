#include <stdio.h>
#include <stdlib.h>
//LEMBRE-SE! em v[3], o "v" é o ponteiro para o primeiro elemento! Logo, neste exemplo a seguir, "*c" seria algo equivalente  a "c[]"
int main(){
  int *c, f; // o começo e fim do vetor
  int x;
  printf("Insira o tamanho do vetor:\n");
  scanf("%d", &f);
  c = malloc(f * sizeof(int));
  if (!c){ //teste pra ver se tem espaço
    printf("Sem memória!\n");
    exit(1);
  }
printf("Insira os elementos do vetor:\n");
for(x=0; x<f; x++){
  scanf("%d", c+x);
}
printf("Este é seu vetor:\n");
for(x=0; x<f; x++){
  printf("%d\n", *(c+x));
}
  free(c);
  return 0;
}