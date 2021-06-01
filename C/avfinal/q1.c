//demonstrar o uso de ponteiro pra função

/*dois carros diferentes na velocidade maxima. 
irei usar 2 funções pra calcular o tempo levado para a distancia pecorrida, em linha reta*/
#include <stdio.h>
float ferrari(float d);
float uno(float d);
int main(){
	float (*p) (float) , x, y, z;
printf("Insira a  distância pecorrida em km inteiros\n");
scanf("%f", &x);
printf("Quer verificar o tempo levado por qual veículo?\nInsira 1 para: Ferrari.\n Insira 2 para: Fiat Uno.\n");
scanf("%f", &z);
if(z==1){
	p = ferrari;
	y = p(x);
}
if(z==2){
	p = uno;
	y= p(x);
}
printf("O tempo levado para pecorrer a distancia %.2f km foi: %.2f hr\n", x, y);
}
float ferrari(float d){
	return 300 / d;
}
float uno(float d){
  return 160/d ;
}
//dividir a velocidade média/hora pela distância (km).