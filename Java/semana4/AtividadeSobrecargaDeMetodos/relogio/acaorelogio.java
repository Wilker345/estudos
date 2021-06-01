package semana4.AtividadeSobrecargaDeMetodos.relogio;

import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class acaorelogio {
	public static void main(String[] args) {
		String hora = LocalDateTime.now().format(DateTimeFormatter.ofPattern("HH"));
		String minuto = LocalDateTime.now().format(DateTimeFormatter.ofPattern("mm"));
		String segundo = LocalDateTime.now().format(DateTimeFormatter.ofPattern("ss"));
		
		relogio.inicializar(hora);
		relogio.inicializar(hora, minuto);
		relogio.inicializar(hora, minuto, segundo);
	}
}
