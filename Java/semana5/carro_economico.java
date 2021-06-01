package semana5;

public class carro_economico extends veiculo {
	String modelo;
	int velocidade;
	int potencia;
	public double gastoCombustivel(){
		return 4/potencia;
	}
}
