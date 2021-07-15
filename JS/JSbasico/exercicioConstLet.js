/* [Luiz Otávio Miranda] tem [30] anos, pesa [84] kg
tem [1.8] de altura e seu IMC e de [25.925925925924]
Luiz Otávio nasceu em [1980] */
const nome = 'João Fontenele';
const idade = 23;
const  altura = 1.78;
const peso = 84.6;
let IMC = peso/(altura*altura);
const nasc = (2021 - idade);
/*console.log(nome, 'tem',idade,'anos, pesa', peso, 'kg\ntem',
altura, 'de altura e seu IMC é de: ', IMC, '\n', nome, 'nasceu em', nasc);*/

// forma boa:
console.log(`${nome} tem ${idade} anos, pesa ${peso} kg
tem ${altura} de altura e seu IMC é de:  ${IMC}\n${nome} nasceu em ${nasc}`);