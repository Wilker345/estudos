package semana6.AtividadeSobrescrita;

public class M�dico extends Pessoa{
	M�dico(String nome, String endere�o, int idade, long cpf, char sexo){
		super(nome, endere�o, idade, cpf, sexo);
	}
	long crm;
	double sal�rio;
	String especializa��o;
	
	void M�dicoProfissao(long crm, double sal�rio, String especializa��o){
		this.crm = crm;
		this.sal�rio = sal�rio;
		this.especializa��o = especializa��o;
	}

		void imprimirValores() {
		System.out.println("Nome: "+nome);
		System.out.println("Endere�o: "+endere�o);
		System.out.println("Idade: "+idade);
		System.out.println("CPF: "+cpf);
		System.out.println("Sexo: "+sexo);
		System.out.println("CRM: "+crm);
		System.out.println("Sal�rio: "+sal�rio);
		System.out.println("Especializa��o: "+especializa��o);
	}
	
	void plant�o() {
	}
}
