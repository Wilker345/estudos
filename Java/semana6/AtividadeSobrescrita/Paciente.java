package semana6.AtividadeSobrescrita;

public class Paciente extends Pessoa{
	Paciente(String nome, String endere�o, int idade, long cpf, char sexo){
		super(nome, endere�o, idade, cpf, sexo);
	}
	String doen�a;
	String medica��o;
	
	void PacienteInfo(String doen�a, String medica��o){
		this.doen�a = doen�a;
		this.medica��o = medica��o;
	}
	
	void imprimirValores() {
		System.out.println("Nome: "+nome);
		System.out.println("Endere�o: "+endere�o);
		System.out.println("Idade: "+idade);
		System.out.println("CPF: "+cpf);
		System.out.println("Sexo: "+sexo);
		System.out.println("Doen�a: "+doen�a);
		System.out.println("Medica��o: "+medica��o);
	}
	void dor(){	
	}
	void alta(){
	}

}
