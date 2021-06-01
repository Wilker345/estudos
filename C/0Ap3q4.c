//Crie uma fun ̧c ̃ao que receba, por referˆencia, um elemento da lista encadeada descrita na figura a seguir e imprima x do elemento fornecido e do seguinte. Imprima uma mensagem para o usu ́ario se o elemento recebido for o  ́ultimo da lista. O tipo de retorno dessa fun ̧c ̃ao deve ser void.
#include <stdio.h>
struct q4{
  int x;
  int *p; // para o proximo
};
void funcao(struct q4 a[]){
  int c;
  printf("De qual estrutura vc quer o valor? (insira numero)\n");
  scanf("%d", &c);
  printf("O valor da %dº estrutura é: %d\n", c, a[c].x);
  if (!a[c].p){
    printf("Você escolheu o último elemento.\n");
  }
  if  (!(!a[c].p)){
    printf("O valor do próximo elemento é: %d", a[c+1].x);
  }
}