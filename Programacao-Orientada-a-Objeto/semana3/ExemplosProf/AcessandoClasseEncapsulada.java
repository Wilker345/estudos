package visibilidade_encapsulamento;

public class AcessandoClasseEncapsulada {
	
	public static void main(String[] args) {
		ClasseEncapsulada ce = new ClasseEncapsulada();
		// Lendo valor do atributo "a"
		int a = ce.getA();
		// Modificando valor do atributo "b"
		ce.setB(5);
		// Acoes nao permitidas pelo encapsulamento:
		ce.a = 10; // erro, variavel eh privada
		ce.setA(10); // erro, metodo nao existe
		ce.b = 20; // erro, variavel eh privada
		int b = ce.getB(); // erro, metodo nao existe
	}
}
