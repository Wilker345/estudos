package semana6.AtividadePassagemDeParametros;

public class fraseImcompleta{
	String comeco;
	fraseImcompleta(String comeco){
		this.comeco = comeco;
	}
	static void completar(fraseImcompleta x, String comeco){
		x.comeco = (x.comeco+comeco);
	}
	public static void main(String[] args) {
		fraseImcompleta frase = new fraseImcompleta("Esc");
		completar(frase, "ola");
		System.out.println("Frase completa-> "+frase.comeco);
	}
}

