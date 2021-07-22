let num1 = 5;
let num2 = 2.567;
//para concatenar, pode fazer assim:
console.log(num1.toString() + num2);
console.log(typeof num1);
//se coloacar um 2 dentro do toString, devolverá o numero como binário:
console.log(num1.toString(2));
//para estabelecer o número de "casas" de um número: ps:vai arredondar 
console.log(num2.toFixed(1));
//verificar se o número é inteiro ou não:
console.log(`"${num1}" é inteiro?:`, Number.isInteger(num1), `\n"${num2}" é inteiro?:`, Number.isInteger(num2));
//verificar se a variável é  number ou não:
let temp = num1 * 'string';
console.log("A variável temporária deixou de ser um number?:", Number.isNaN(temp));
/* IEEE 754-2008 é o padrão que o JS segue, isso causa certa imprecisão com números decimais, portanto
é necessário pesquisar formas de lidar  com isso, caso precise */
