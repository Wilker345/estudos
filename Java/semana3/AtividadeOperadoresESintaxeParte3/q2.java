/*Imprima a tabela a seguir utilizando o encadeamento da estrutura for: 
1
2 4
3 6 9
4 8 12 16
n n*2 n*3 .... n*n
*/
public class q2{
	public static void main(String[] args){
		int x=1;
		for(int n=5; x<=n; x++){
			for(int d=1; d<=x; d++){
				System.out.print(x*d+" ");
				if(x == d){
					System.out.print("\n");
				}
			}
		}
	}
}