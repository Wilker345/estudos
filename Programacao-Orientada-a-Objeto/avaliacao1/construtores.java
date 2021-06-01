package avaliacao1;

public class construtores {
	String nome;
	public construtores() {
		System.out.println("Construtor criado, mas sem nome!");
	}
	public construtores(String a) {	
		this.nome = a;
		System.out.println("Construtor criado, se chama "+a+"!");
	}
	public static void main(String[] args) {
		construtores x = new construtores();
		construtores y = new construtores("Bob");
	}
}

