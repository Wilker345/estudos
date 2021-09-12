"use strict";
/*Arrays "totalmente definidos". Não exite no javascript habitual, mas exite no Python também.
Determina os tipos de cada posição assim como a extensão do vetor. Com readonly se torna inalterável.*/
var dadosCliente1 = /* readonly */ [1, 'Luiz'];
console.log(dadosCliente1);
dadosCliente1[0] = 2;
console.log(dadosCliente1);
