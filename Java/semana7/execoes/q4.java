package semana7.execoes;
import java.util.Scanner;
public class q4 {
	public static void main(String[] args) {
		int c;
		boolean autorizacao = false;
		Scanner ler = new Scanner(System.in);
		while(autorizacao == false) {
			System.out.println("Insira um n�mero inteiro");
			try {
				c = Integer.parseInt(ler.nextLine());
				System.out.println("O numero inserido foi: "+c);
				autorizacao = true;
			}catch (Exception e) {
				System.out.println("Voc� n�o inseriu um n�mero inteiro.");
			}
		}
	}
}
