package semana7.execoes;
import java.util.Scanner;
public class throwsEx {
	public static void main(String[] args) throws naonegativo{
		int x;
		Scanner ler = new Scanner(System.in);
		System.out.println("Insira um número:\n");
		try{
			x = Integer.parseInt(ler.nextLine());
			if (x < 0) {
				throw new naonegativo("Número não pode ser menor que zero!");
				  }
			System.out.println("Número recebido: "+x+"\n");
		}finally {}
	}
}
