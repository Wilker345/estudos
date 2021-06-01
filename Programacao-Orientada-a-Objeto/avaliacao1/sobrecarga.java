package avaliacao1;

public class sobrecarga {
	public static void Print(int a) {
		System.out.println("Método com um inteiro como entrada:");
		System.out.println(a+"\n");
	}
	public static void Print(int a, String b) {
		System.out.println("Método com um inteiro seguido de uma string como entrada:");
		System.out.println(a +" "+b +"\n");
	}
	public static void Print(String b, int a) {
		System.out.println("Método com uma string seguido de um inteiro como entrada:");
		System.out.println(b +" "+ a +"\n");
	}
	public static void Print(int a, int c) {
		System.out.println("Método com dois inteiros como entrada:");
		System.out.println("Soma de "+a+" + "+c+" = "+(a+c)+"\n");
	}
	public static void main(String[] args) {
		Print(2);
		Print(4, "Teste1");
		Print("Teste2", 19);
		Print(37, 63);
	}
}

