package semana9.AtividadePolimorfismo;

public class produto {
	 private String nome, descri��o;
	 private int pre�o;
	public String getDescri��o() {
		return descri��o;
	}
	public void setDescri��o(String descri��o) {
		this.descri��o = descri��o;
	}
	public int getPre�o() {
		return pre�o;
	}
	public void setPre�o(int pre�o) {
		this.pre�o = pre�o;
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
		setDescri��o(b);
		setPre�o(c);
	}
	//to string 
	public void toString(produto a) {
		System.out.println("Produto: "+this.nome+", "+this.descri��o+", "+this.pre�o);
		
	}
}
