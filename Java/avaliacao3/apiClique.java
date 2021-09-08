package avaliacao3;
import javax.swing.*;
public class apiClique {
	public static void main(String[] args) {
	JFrame janela = new JFrame();
	janela.setTitle("Clique no botão");
	janela.setSize(300, 200);
	janela.setLocation(500, 300);
	janela.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	
	JPanel painel = new JPanel();
	JButton botao = new JButton("Clique aqui");
	ouvinte clicou = new ouvinte();
	
	botao.addActionListener(clicou);
	janela.add(painel);
	painel.add(botao);
	janela.setVisible(true);
	}
}
