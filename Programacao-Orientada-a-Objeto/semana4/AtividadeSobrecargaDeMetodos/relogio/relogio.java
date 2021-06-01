package semana4.AtividadeSobrecargaDeMetodos.relogio;

public class relogio {
	static void inicializar(String A, String B, String C) {
		System.out.println(A+":"+B+":"+C);
	}
	static void inicializar(String A, String B) {
		System.out.println(A+":"+B+":01");
	}
	static void inicializar(String A) {
		System.out.println(A+":01:01");
	}
}
