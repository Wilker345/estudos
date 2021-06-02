package semana6.AtividadeSobrescrita;

public class Médico extends Pessoa{
	Médico(String nome, String endereço, int idade, long cpf, char sexo){
		super(nome, endereço, idade, cpf, sexo);
	}
	long crm;
	double salário;
	String especialização;
	
	void MédicoProfissao(long crm, double salário, String especialização){
		this.crm = crm;
		this.salário = salário;
		this.especialização = especialização;
	}

		void imprimirValores() {
		System.out.println("Nome: "+nome);
		System.out.println("Endereço: "+endereço);
		System.out.println("Idade: "+idade);
		System.out.println("CPF: "+cpf);
		System.out.println("Sexo: "+sexo);
		System.out.println("CRM: "+crm);
		System.out.println("Salário: "+salário);
		System.out.println("Especialização: "+especialização);
	}
	
	void plantão() {
	}
}
