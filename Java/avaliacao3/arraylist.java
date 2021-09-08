package avaliacao3;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
public class arraylist {
	public static void main(String [] args) {
		List<String> pessoas = new ArrayList<String>();
		Scanner ler = new Scanner(System.in);
		String a, b, c, d, e;
		System.out.println("Insira o nome da pessoa:");
		a = ler.next();
		pessoas.add(a);
		System.out.println("Insira o nome da pessoa:");
		b = ler.next();
		pessoas.add(b);
		System.out.println("Insira o nome da pessoa:");
		c = ler.next();
		pessoas.add(c);
		System.out.println("Insira o nome da pessoa:");
		d = ler.next();
		pessoas.add(d);
		System.out.println("Insira o nome da pessoa:");
		e = ler.next();
		pessoas.add(e);
		
		//sem mudar a ordem
		System.out.println(pessoas);
		//mudando a ordem
		Collections.sort(pessoas);
		System.out.println(pessoas);
	}
}
