package avaliacao1.GerenciamentoQ6;

//Não sei usar "parse", então vou usar string como date, apenas para executar a questão

public class LocadorPessoaFisica {
	String nome;
	int cpf;
	String dataNascimento;
	String endereço;
	int telefone;
	void autorizarLocacao(int idPedidoLocacao) {
	}
	public LocadorPessoaFisica(String nome, int cpf, String dataNascimento, String endereço, int telefone) {
		this.nome = nome;
		this.cpf = cpf;
		this.dataNascimento = dataNascimento;
		this.endereço = endereço;
		this.telefone = telefone;
	}
}
