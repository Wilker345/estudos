int MaiorN(int *vetor, int lin, int col){
	int primeiro, maior;
	primeiro = *vetor;
	for(int c=1; c< (lin * col); c++){
		if(*(vetor + c)>*(vetor + (c -1))){
    maior = *(vetor + c);
		}
	}
	return maior;
}