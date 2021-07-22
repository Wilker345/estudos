//arrendondar pra cima e baixo, respectivamente:
let num1 = 2.52;
console.log("Cima:", Math.ceil(num1), "Baixo:", Math.floor(num1));
//arredondar pro mais proximo. Ps: se for "tanto faz" ele arredonda pra cima.
console.log("Mais próximo:", Math.round(num1));
//encontrar o maior e menor número:
console.log("Maior:", Math.max(1,2,3), "Menor:", Math.min(1,2,3));
//gerar um número aleatório entre um range (padrão 0-1)
const rand = Math.random() * (10-5) + 5;
console.log("Número aleatório entre 5 e 10:", rand);
//Valores infinitos não contam como erro e ficam como True em boolean, então é necessário checar:
console.log("Valor infinito:", 100/0);