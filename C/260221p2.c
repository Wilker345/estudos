//Escreva um programa em C que utilize uma Estrutura estoque que cont ́em uma string com o nomePeca, um n ́umero inteiro para identificar o n ́umero da pe ̧ca, o pre ̧co em ponto flutuante e um elemento inteiro para identificar o n ́umero do pedido.
#include <stdio.h>
struct estoque{
  char nomepeca[30];
  int cod, npedido;
  float preco;
};
int main(){
  struct estoque x;
  printf("Insira o nome da peça:\n");
  scanf("%s", x.nomepeca);
  printf("Insira o código da peça:\n");
  scanf("%d", &x.cod);
  printf("Insira o preço da peça:\n");
  scanf("%f", &x.preco);
  printf("Insira o número de pedido da peça:\n");
  scanf("%d", &x.npedido);
  printf("Informações do determinado item no estoque:\nNome: %s\nCódigo: %d\nPreço: %.2f\nNúmero do pedido: %d\n", x.nomepeca, x.cod, x.preco, x.npedido);
  return 0;
}