//Essa parte do conteudo exigiu compreensão e HTML que não possuo ainda, portanto está incompleto

function escopo(){
    const form = document.querySelector(".form");
    /*form.onsubmmit = function(evento){
        evento.preventDefault();
        alert(1);
        console.log('Foi enviado')
    };*/ 
    function recebeEventoForm (evento){
        evento.preventDefault();
        
    }
    form.addEventListener('submit', recebeEventoForm);
}
escopo();