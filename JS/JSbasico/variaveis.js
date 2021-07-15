let nome = 'João';
console.log(nome,'nasceu em 1984');
nome = 'João Nobrega';
let texto = 'nasceu em 1984';
console.log(nome, texto); 
//let = variavel normal; const = variavel constante. Em JS, o tipo da variável é implícito.
const nome2 = 'Wilson';
console.log(typeof nome2);
//tipos primitivos: String, Number. Undefined, Null, Boolean, Symbol
//Trocar o tipo primitivo:
const str = '234';
const num = parseInt(str);
console.log(typeof num)