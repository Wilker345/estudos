"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.meuFilter = void 0;
function meuFilter(array, callbackfn) {
    const novoArray = [];
    for (let i = 0; i < array.length; i++) {
        if (callbackfn(array[i])) {
            novoArray.push(array[i]);
        }
    }
    return novoArray;
}
exports.meuFilter = meuFilter;
const array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const arrayFiltradoOriginal = array.filter((value) => value < 5);
console.log(arrayFiltradoOriginal);
const arrayFiltrado = meuFilter(array, (value) => value < 5);
console.log(arrayFiltrado);
