/*Usando o operador ternário, escreva um programa em Java que, dada uma variável x (com valor 80, por exemplo), temos y de acordo com a seguinte regra:

se x é par, y = x / 2
se x é impar, y = 3 * x + 1
imprime y
*/
public class AtividadeOperadoresESintaxeParte2{
  public static void main(String[] args){
	  int x = 80, y;
		y=(x%2 ==0? x/2 : 3*x+1);
		System.out.print("y= "+y);
}
}