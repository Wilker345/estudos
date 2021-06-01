/*
Crie um programa em Java capaz de imprimir os números da série de Fibonacci que são inferiores ao valor informado pelo usuário via console ou caixa de diálogo. A série de Fibonacci é a seguinte: 0, 1, 1, 2, 3, 5, 8, 13, 21, etc... Para calculá-la, o primeiro elemento é zero e o segundo vale um, daí por diante, o n-ésimo elemento vale o (n-1)-ésimo elemento somado ao (n-2)-ésimo elemento (ex: 1 = 1 + 0). Para receber o valor informado pelo usuário, você pode utilizar a classe Scanner (java.util) ou a classe JOptionPane (javax.swing). Pesquise o funcionamento destas classes.
*/
import java.util.Scanner;
public class q4{
  public static void main(String[] args){
    int elem1 = 1, elem2 = 0, limite;
		Scanner ler = new Scanner(System.in);
		System.out.printf("Informe o número limite\n");
    limite = ler.nextInt();
    System.out.print(elem2+" "+elem1+" ");
    do{
      elem1 = elem1 + elem2;
      elem2 = elem1 - elem2;
      System.out.print(elem1+" ");
    }while(elem1<limite);
		System.out.print("\n");
	}
}