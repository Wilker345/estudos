//Crie uma Estrutura disciplina em que um dos campos corresponde tamb ́em a uma estrutura professor.
#include <stdio.h>
struct professor{
  char nomeprof[30];
};
struct disciplina{
  struct professor prof;
  char nomedis[20];
};
int main(){
  struct disciplina x;
  printf("Insira o nome da disciplina:\n");
  scanf("%s", x.nomedis);
  printf("Insira o nome do professor:\n");
  scanf("%s", x.prof.nomeprof);
  printf("\nDisciplina: %s\nProfessor: %s\n", x.nomedis, x.prof.nomeprof);
  return 0;
}