package semana6.AtividadePassagemDeParametros;

public class variosParametros {
	public static void magiaElementos(String...magias) {
		for (String Magia: magias)
			System.out.println(Magia);
	}
	public static void main(String[] args) {
		magiaElementos("Agi", "Garu", "Bufu", "Zio", "Hama", "Mudo", "Megido");
	}
}
