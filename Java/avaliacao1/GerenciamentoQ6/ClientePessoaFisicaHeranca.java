package avaliacao1.GerenciamentoQ6;

//N�o sei usar "parse", ent�o vou usar string como date, apenas para executar a quest�o

import java.util.ArrayList;
import java.util.Date;

public class ClientePessoaFisicaHeranca extends LocadorPessoaFisica {
	
	public ClientePessoaFisicaHeranca(String nome, int cpf, String dataNascimento, String endere�o, int telefone){
	super(nome, cpf, dataNascimento, endere�o, telefone);
	}
	void registrarPedidoLocacao(ArrayList<Produto> lista, LocadorPessoaFisica Locador, Date dataInicio, Date dataFim){		
	}
	public static void main(String[] args) {
		ClientePessoaFisicaHeranca A = new ClientePessoaFisicaHeranca("Ricardo", 195630419, "14041999", "Rua 14", 85842);
	}
}
