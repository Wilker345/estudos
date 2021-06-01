//Escreva um programa em C que organize em uma Estrutura o endereco de um vetor alocado dinamicamente, a quantidade de elementos desse vetor e a sua media. Para calculo da media, crie uma funcao o mais generica (reutiliz ́avel) possıvel. Observe que o vetor nao  ́e um elemento da Estrutura.
#include <stdio.h>
#include <stdlib.h>
float media(float, int);
struct q2{
  int *p, tam;
  float med;
};
int main(){
  int *c, f;
  int x;
  float valor;
  struct q2 A;
  printf("Insira o tamanho do vetor:\n");
  scanf("%d", &f);
  c = malloc(f * sizeof(int));
  if (!c){
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
A.p = (c + 0);
A.tam = f;
for(x=0; x<f; x++){
  valor += *(c + x);
}
A.med = media(valor, f);
printf("A estrutura é:\nEndereço: %p\nQt.Elem: %d\nMedia: %.2f\n", A.p, A.tam, A.med);
free(c);
return 0;
}
float media(float somatotal, int ntotal){
  return somatotal/ntotal;
}