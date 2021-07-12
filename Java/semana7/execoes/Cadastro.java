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
				System.out.println("Nome inválido\n");
			}
			//DDD
			try{
				System.out.println("\nInsira o DDD:");
				A.ddd = Integer.parseInt(ler.nextLine());
			}catch (Exception e){
				System.out.println("DDD inválido\n");
			}
			///Número
			try{
				System.out.println("\nInsira o número:");
				A.numero = Integer.parseInt(ler.nextLine());
			}catch (Exception e){
				System.out.println("Número inválido\n");
			}
			//Check
			A.check = true;
		}
		System.out.println("Cadastro completo. Informações:\nNome: "+A.nomeCompleto+"\nNúmero: "+(A.ddd)+(A.numero));
	}
}
