/*
If pode ser usado sozinho
ELse precisa de If antes
Pode ter vários else ifs na checagem
Pode ter apenas um else na checagem 
*/
const hora = 15;
if (hora < 12){
    console.log('Bom dia!');
}else if(hora > 12 && hora < 18){
    console.log('Boa tarde!');
}else if (hora > 18){
    console.log('Boa noite!');
}
