/*Classe: 

contrato:
  caract.: Pessoa(titular), empresa prestadora, dependentes

fatura:
	caract.: Contrato, tarifas, data de vencimento, percentual de multa, juros por dia,históricos das consultas, profissionais que realizaram consultas e exames

pessoa:
	caract.:  Sexo, nome, endereço, data de nascimento (idade)
	*/
public class Pessoa{
	String Nome;
	String Sexo;
	String Endereço;
	Int DataNasc;
}
public class Contrato{
	String PessoaTitular;
	String EmpresaPrestadora;
	String Dependentes;
}
public class fatura{
	Int Contrato;
	Int Tarifas;
	Int DataDeVencimento;
	float PercentualMulta;
	float JurosDia;
	Int historicos;
	String Profissionais;
}