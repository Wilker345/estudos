

/*
Crie um programa capaz de imprimir os fatoriais de 1 a 10 na saída padrão. O fatorial de um número n é dado por: n * n-1 * n-2 ... até n = 1.
*/
public class q3{
	public static void main(String[] args){
		for(int x=1;x<=10;x++){
			fat(x, x);
		}
	}
	public   static void fat(int a, int b){
		int fatorial = 1;
		while (a > 1){
 			fatorial = fatorial * a;
 			a = a - 1;
		}
		System.out.print("O fatorial de "+b+" é "+fatorial+"\n");
	}
}