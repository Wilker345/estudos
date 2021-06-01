//Exemplifique o uso da fun ̧c ̃ao realloc() em uma situa ̧c ̃ao onde, durante a execu ̧c ̃ao do programa, seja necess ́ario adicionar elementos a um vetor com elementos preexistentes. N ̃ao utilizar o exemplo citado em aula.

//em um jogo, certa habilidade utiliza o numero e nível de jogadores no calculo para determinado dano a um monstro. Cada jogador tem informações próprias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int *magia, c = 4, r, s, dano;
	magia = malloc(c * sizeof(int));
	for(int x=0; x<c; x++){
    magia[x] = rand() %(9) + 1;
	}
	printf("A magia irá usar o nível de 4 jogadores. Irá adicionar mais?\nDigite 1 para SIM; 2 para NAO\n");
	scanf("%d", &r);
	if(r==1){
		printf("Insira quantos novos jogadores:\n");
		scanf("%d", &s);
		magia = realloc(magia, s);
		for(int x=0; x<c+s; x++){
		  magia[c+x] = rand() %(9) + 1;
		}
	}
	if (r==2){
	  printf("Nenhum jogador adicionado.\n");
	}
	else{
		printf("Resposta inválida.\n");
		exit(1);
	}
	for (int x=0; x<c+s; x++){
		dano += dano + magia[c+x];
	}
	printf("O dano causado foi: %d", dano);
	free(magia);
	return 0;
}