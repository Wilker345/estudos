package semana7.execoes;
import java.util.Scanner;
public class Cadastro {
	int ddd;
	int numero;
	String nomeCompleto;
	boolean check;
	
	public static void main(String [] args) {
		Cadastro A = new Cadastro();
		A.check = false;
		Scanner ler = new Scanner(System.in);
		while(A.check==false) {
			///Nome
			try{
				System.out.println("Insira o nome completo:");
				A.nomeCompleto = ler.nextLine();
			}catch (Exception e){
				System.out.println("Nome inv�lido\n");
			}
			//DDD
			try{
				System.out.println("\nInsira o DDD:");
				A.ddd = Integer.parseInt(ler.nextLine());
			}catch (Exception e){
				System.out.println("DDD inv�lido\n");
			}
			///N�mero
			try{
				System.out.println("\nInsira o n�mero:");
				A.numero = Integer.parseInt(ler.nextLine());
			}catch (Exception e){
				System.out.println("N�mero inv�lido\n");
			}
			//Check
			A.check = true;
		}
		System.out.println("Cadastro completo. Informa��es:\nNome: "+A.nomeCompleto+"\nN�mero: "+(A.ddd)+(A.numero));
	}
}
