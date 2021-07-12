package semana9.AtividadePolimorfismo;

public class produto {
	 private String nome, descrição;
	 private int preço;
	public String getDescrição() {
		return descrição;
	}
	public void setDescrição(String descrição) {
		this.descrição = descrição;
	}
	public int getPreço() {
		return preço;
	}
	public void setPreço(int preço) {
		this.preço = preço;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	 
	//constructor
	produto(String a, String b, int c){
		setNome(a);
		setDescrição(b);
		setPreço(c);
	}
	//to string 
	public void toString(produto a) {
		System.out.println("Produto: "+this.nome+", "+this.descrição+", "+this.preço);
		
	}
}
