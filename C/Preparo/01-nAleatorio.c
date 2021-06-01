#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int x, v[5], base, limite;
  srand(time(NULL));
  for(x=0; x < 5; x++){
    v[x] = rand(); // [0, rand_max] base e limite determinado pela arquitetura do pc
  }
  printf("Vetor aleatório:\n");
  for(x=0; x < 5; x++){
    printf("%d\n", v[x]);
  }

  printf("Insira uma base pros números aleatórios:\n");
  scanf("%d", &base);
  printf("Insira um limite pros números aleatórios:\n");
  scanf("%d", &limite);
  printf("Vetor aleatório com limites determinados:\n");
  for(x=0; x < 5; x++){
    v[x] = rand() %(limite - base + 1) + base; // base e limite determinado pelo programador, ou usuário
  }
  for(x=0; x < 5; x++){
    printf("%d\n", v[x]);
  }
}