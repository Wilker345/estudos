"use strict";
/* eslint-disable */
var nome = 'Carlos';
var idade = 30;
var adulto = true;
var simbolo = Symbol('qualquer-symbol');
//let big: bigint = 10n;
//Arrays
var arrayDeNumeros = [1, 2, 3];
var arrayDeNumeros2 = [4, 5, 6];
//Objetos
var pessoa = {
    nome: 'João',
    idade: 22
}; //Ao colocar '?' você deixa um atributo opcional
//Funções
function soma(x, y) {
    return x + y; //a linguagem pré-determinou um retorno do tipo number
}
var soma2 = function (x, y) { return x + y; };
