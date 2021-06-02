package semana6.AtividadeSobrescrita;

public class Pessoa {
	String nome;
	String endereço;
	int idade;
	long cpf;
	char sexo;
	//construtor
	Pessoa(String nome, String endereço, int idade, long cpf, char sexo){
		this.nome = nome;
		this.endereço = endereço;
		this.idade = idade;
		this.cpf = cpf;
		this.sexo = sexo;
	}
	//Métodos
	void imprimirValores() {
		System.out.println("Nome: "+nome);
		System.out.println("Endereço: "+endereço);
		System.out.println("Idade: "+idade);
		System.out.println("CPF: "+cpf);
		System.out.println("Sexo: "+sexo);	
	}
	void andar(){
	}
}
