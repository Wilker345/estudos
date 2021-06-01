package semana4.AtividadeSobrecargaDeMetodos.ferias;
public class funcionario{

	private String nome;
	private int dataAdmissao;
	private float salario;
	static int Identificador;

	public void setNome(String nome){
    this.nome = nome;
  }
	public void setDataAdmissao(int dataAdmissao){
    this.dataAdmissao = dataAdmissao;
  }
	public void setSalario(float salario){
		if (salario < 700) {
			System.out.println("Salário Mínimo: 700 Reais\nPrograma Encerrado.");
			System.exit(0);
		}
    this.salario = salario;
  }

	public String getNome(){
		return this.nome;
	}
	public int getDataAdmissao(){
		return this.dataAdmissao;
	}
	public float getSalario(){
		return this.salario;
	}
	
	public void tirarFerias() {
		System.out.println("O funcionário irá tirar férias por 30 dias.");
	}
	public void tirarFerias(int dias) {
		if (dias == 30) {
			tirarFerias();
			System.exit(0);
		}
		System.out.println("O funcionário irá tirar férias por "+dias+" dias.");	
	}
}
