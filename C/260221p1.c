//Escreva um programa em C que utilize uma Estrutura aluno para conter duas notas, lidas do usuário, e sua média.
#include<stdio.h>
struct aluno{
  float n1, n2, med;
};
int main(){
int a;
struct aluno x;
printf("Insira a 1º nota:\n");
scanf("%f", &x.n1);
printf("Insira a 2º nota:\n");
scanf("%f", &x.n2);
x.med= (x.n1+x.n2)/2;
printf("Nota 1: %.2f\nNota 2: %.2f\nMédia: %.2f\n", x.n1, x.n2, x.med);
return 0;
}