package avalicao2.q6;

public class Polimorfismo {
	//metodoPoli
	public void VeicDescr (veiculo a) {
		a.Descricao();
	}

	public static void main(String[] args) {
		Polimorfismo A = new Polimorfismo();
		Polimorfismo B = new Polimorfismo();
		Polimorfismo C = new Polimorfismo();
		A.VeicDescr(new veiculo());
		B.VeicDescr(new carro());
		C.VeicDescr(new moto());
		
	}
	
}

//classes
 class veiculo{
	int rodas;
	public void Descricao() {
		System.out.println("Possue rodas");
	}
}
 class carro extends veiculo{
	 public void Descricao(){
	 System.out.println("Possue 4 rodas");
	 }
 }
 class moto extends veiculo{
	public void Descricao(){
		System.out.println("Pousse 2 rodas");
	}
	
	}
 