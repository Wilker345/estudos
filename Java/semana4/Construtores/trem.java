package semana4.Construtores;

import java.util.Date;

public class trem {
	vagao Vum= new vagao();
	locomotiva Lum= new locomotiva();
	private String Descricao;
	private Date DataDeFormacao;
	private String EstacaoOrigem;
	private String EstacaoDestino;
	
	public String getDescricao() {
		return Descricao;
	}
	public void setDescricao(String descricao) {
		Descricao = descricao;
	}
	public Date getDataDeFormacao() {
		return DataDeFormacao;
	}
	public void setDataDeFormacao(Date dataDeFormacao) {
		DataDeFormacao = dataDeFormacao;
	}
	public String getEstacaoOrigem() {
		return EstacaoOrigem;
	}
	public void setEstacaoOrigem(String estacaoOrigem) {
		EstacaoOrigem = estacaoOrigem;
	}
	public String getEstacaoDestino() {
		return EstacaoDestino;
	}
	public void setEstacaoDestino(String estacaoDestino) {
		EstacaoDestino = estacaoDestino;
	}
	
}
