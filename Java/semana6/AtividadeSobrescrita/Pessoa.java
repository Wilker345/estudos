package semana6.AtividadeSobrescrita;

public class Pessoa {
	String nome;
	String endere�o;
	int idade;
	long cpf;
	char sexo;
	//construtor
	Pessoa(String nome, String endere�o, int idade, long cpf, char sexo){
		this.nome = nome;
		this.endere�o = endere�o;
		this.idade = idade;
		this.cpf = cpf;
		this.sexo = sexo;
	}
	//M�todos
	void imprimirValores() {
		System.out.println("Nome: "+nome);
		System.out.println("Endere�o: "+endere�o);
		System.out.println("Idade: "+idade);
		System.out.println("CPF: "+cpf);
		System.out.println("Sexo: "+sexo);	
	}
	void andar(){
	}
}
