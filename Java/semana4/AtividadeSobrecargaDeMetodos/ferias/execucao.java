package semana4.AtividadeSobrecargaDeMetodos.ferias;
import java.util.Scanner;
public class execucao {
	public static void main(String[] args) {
	
		Scanner opcao = new Scanner(System.in);
		
	
		System.out.println("Insira 1 para Férias padrão\nInsira 2 para férias com quantidade de dias especifico.");
		if(opcao.nextInt() == 1) {
			tirarFerias(30);
		}
		if(opcao.nextInt()== 2) {
			System.out.println("Insira a quantidade de dias.");
			tirarFerias(nDias.nextInt());
		}
		else {
			System.out.println("Inválido.\nPrograma encerrado.");
			System.exit(0);	
		}	
	}
}