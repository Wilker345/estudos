package visibilidade_encapsulamento.teste2;

import visibilidade_encapsulamento.teste1.Base;

public class OutraClasseEmOutroPacote {
	
	public static void main(String[] args) {
		Base b = new Base();
		b.publico = 1;
		b.protegido = 2; // erro, atributo protegido!
		b.padrao = 3; // erro, atributo padrao!
		b.privado = 4; // erro, atributo privado!
		// Se a classe Base tivesse sido criada com a 
		// visibilidade padrão, não poderia ter sido
		// instanciada aqui
	}
}
