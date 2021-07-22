//trocar o valor entre 3 variaveis (A recebe B, B recebe C e C recebe A)
let varA = 'A';
let varB = 'B';
let varC = 'C';
let troca;
console.log(`Versão inicial: ${varA}, ${varB}, ${varC}`);
troca = varB;
varB = varC;
varC = varA;
varA = troca;
console.log(`Versão final: ${varA}, ${varB}, ${varC}`);
/*
versão do professor:
[varA, varB, varC] = [varB, varC, varA];
*/