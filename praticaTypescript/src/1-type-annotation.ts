/* eslint-disable */
let nome: string = 'Carlos';
let idade: number = 30;
let adulto: boolean = true;
let simbolo: symbol = Symbol('qualquer-symbol');
//let big: bigint = 10n;

//Arrays
let arrayDeNumeros: Array<number> = [1, 2, 3];
let arrayDeNumeros2: number[] = [4, 5, 6];

//Objetos
let pessoa: {nome: string, idade: number, adulto?: boolean} = {
  nome: 'João',
  idade: 22
}; //Ao colocar '?' você deixa um atributo opcional

//Funções
function soma(x: number, y:number){
  return x + y //a linguagem pré-determinou um retorno do tipo number
}
const soma2:(x: number, y: number) => number = (x, y) => x + y;
