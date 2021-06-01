/*(Continuação de exercício anterior, com inclusão de estruturas de repetição) Escreva um programa em Java que, dada uma variável x (com valor 80, por exemplo), temos y de acordo com a seguinte regra:
se x é par, y = x / 2
se x é impar, y = 3 * x + 1
imprime y

O programa deve então armazenar o valor de y em x e continuar até que y tenha o valor final de 1. Por exemplo, para x = 13, a saída será: 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1.
*/
public class q1{
  public static void main(String[] args){
	  int x = 80, y;
		while(x>1){
			y=(x%2 ==0? x/2 : 3*x+1);
			System.out.print("y = "+y+"\n");
			x = y;
		}
	}
}
