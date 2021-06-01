//Escreva um programa em C que modifique a Quest ̃ao 1 para conter um array com 3 alunos. Escreva uma funcao para calcular a m ́edia dos alunos.
#include<stdio.h>
float funcmed(float, float);
struct nota{
  float n1, n2, med;
};

int main(){
int x, a;
struct nota aluno[3];

//pegar dados
for(x=0; x<3; x++){
  printf("Insira a 1º nota do %dº aluno:\n", x+1);
  scanf("%f", &aluno[x].n1);
  printf("Insira a 2º nota do %dº aluno:\n", x+1);
  scanf("%f", &aluno[x].n2);
  aluno[x].med= funcmed(aluno[x].n1, aluno[x].n2);
}

//imprimir
for(x=0; x<3; x++){
  printf("\n%dºAluno:\nNota 1: %.2f\nNota 2: %.2f\nMédia: %.2f\n",x+1, aluno[x].n1, aluno[x].n2, aluno[x].med);
}
return 0;

}
//funcao media
float funcmed(float a, float b){
  return (a + b)/2;
}