package visibilidade_encapsulamento.teste1;

public class OutraClasseDoMesmoPacote {
	
	public static void main(String[] args) {
		Base b = new Base();
		b.publico = 1;
		b.protegido = 2;
		b.padrao = 3;
		b.privado = 4; // erro, atributo privado!
		b.imprimePublico();
		b.imprimeProtegido();
		b.imprimePadrao();
		b.imprimePrivado(); // erro, método privado!
	}
	
}
