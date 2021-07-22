//por função:
function criaPessoa (nome, idade){
    return {nome, idade};
}
const pessoa1 = criaPessoa('Carlos', 19);
console.log(`Nome: ${pessoa1.nome}\nIdade: ${pessoa1.idade} anos`);
//Diretamente:
const humano1 = {
    nome: 'João',
    idade: 32,
    //método / função:
    andar(){
        console.log(`${this.nome} está caminhando...`);
    }
}
console.log(`Nome: ${humano1.nome}\nIdade: ${humano1.idade} anos`)
humano1.andar()