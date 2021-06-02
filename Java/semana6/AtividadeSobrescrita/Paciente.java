package semana6.AtividadeSobrescrita;

public class Paciente extends Pessoa{
	Paciente(String nome, String endereço, int idade, long cpf, char sexo){
		super(nome, endereço, idade, cpf, sexo);
	}
	String doença;
	String medicação;
	
	void PacienteInfo(String doença, String medicação){
		this.doença = doença;
		this.medicação = medicação;
	}
	
	void imprimirValores() {
		System.out.println("Nome: "+nome);
		System.out.println("Endereço: "+endereço);
		System.out.println("Idade: "+idade);
		System.out.println("CPF: "+cpf);
		System.out.println("Sexo: "+sexo);
		System.out.println("Doença: "+doença);
		System.out.println("Medicação: "+medicação);
	}
	void dor(){	
	}
	void alta(){
	}

}
