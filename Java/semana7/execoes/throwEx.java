package semana7.execoes;
import java.util.Scanner;
public class throwEx {
	public static void main(String[] args){
		int x;
		Scanner ler = new Scanner(System.in);
		System.out.println("Insira um número:\n");
		try{
			x = Integer.parseInt(ler.nextLine());
			if (x < 0) {
				  throw new Exception("Número não pode ser menor que zero!");
				  }
			System.out.println("Número recebido: "+x+"\n");
			}catch(Exception e) {
				System.out.println(e);
			}
	}
}

