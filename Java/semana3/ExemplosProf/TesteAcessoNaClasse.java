package visibilidade_encapsulamento;

public class TesteAcessoNaClasse {
	
	int x;
	int y;
	int result;
	
	public void soma() {
		// Acessando atributos de instância dentro da própria classe
		result = x + y;
	}
	
	public void somaMaisUm() {
		// Acessando um método dentro da própria classe
		soma();
	}

}
