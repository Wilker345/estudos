import React from "react";
export function Login (){
  return(
    <div className="telaLogin">
      <input type='text' placeholder='Nome'/>
      <br/>
      <input type ='text' placeholder='Senha'/>
      <br/>
      <button className='botaoLogin'>Login</button>
      <button className='botaoGoogle'>Entrar com Google</button>

    </div>
  )
}

