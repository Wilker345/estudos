package visibilidade_encapsulamento.teste1;

public class Base {
	
	// Quatro diferentes tipos de visibilidade de atributos
	public		int publico;
	protected 	int protegido;
	private		int privado;
				int padrao;
	
	// Quatro diferentes tipos de visibilidade de métodos
	public void imprimePublico() {}
	protected void imprimeProtegido() {}
	private void imprimePrivado() {}
	void imprimePadrao() {}
}
