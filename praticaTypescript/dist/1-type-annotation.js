"use strict";
/* eslint-disable */
let nome = 'Carlos';
let idade = 30;
let adulto = true;
let simbolo = Symbol('qualquer-symbol');
//let big: bigint = 10n;
//Arrays
let arrayDeNumeros = [1, 2, 3];
let arrayDeNumeros2 = [4, 5, 6];
//Objetos
let pessoa = {
    nome: 'João',
    idade: 22
}; //Ao colocar '?' você deixa um atributo opcional
//Funções
function soma(x, y) {
    return x + y; //a linguagem pré-determinou um retorno do tipo number
}
const soma2 = (x, y) => x + y;
