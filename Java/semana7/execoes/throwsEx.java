package semana7.execoes;
import java.util.Scanner;
public class throwsEx {
	public static void main(String[] args) throws naonegativo{
		int x;
		Scanner ler = new Scanner(System.in);
		System.out.println("Insira um n?mero:\n");
		try{
			x = Integer.parseInt(ler.nextLine());
			if (x < 0) {
				throw new naonegativo("N?mero n?o pode ser menor que zero!");
				  }
			System.out.println("N?mero recebido: "+x+"\n");
		}finally {}
	}
}
