package AtividadeVisibilidadeEncapsulamento;
import java.util.Scanner;
public class Principal{
	public static void main(String[] args){
		Scanner sal = new Scanner(System.in);

		Funcionario A = new Funcionario();
		A.setNome("Ademir");
		A.setDataAdmissao(13052021);
		A.setSalario(900);

		Funcionario B = new Funcionario();
		B.setNome("Benice");
		B.setDataAdmissao(13052021);
		B.setSalario(900);

		Funcionario C = new Funcionario();
		C.setNome("Carlos");
		C.setDataAdmissao(13052021);
		//Teste do salario minimo
		System.out.println("Qual o salário do funcionário C?");
		C.setSalario(sal.nextFloat());
		
	}
}