import { useHistory } from 'react-router';
import React from "react";
export function Login (){
  const history = useHistory();
  function aoCrud() {
    history.push('/crud');
  };
  return(
    <div className="telaLogin">
      <input type='text' placeholder='Nome'/>
      <br/>
      <input type ='text' placeholder='Senha'/>
      <br/>
      <button className='botaoLogin' onClick={aoCrud}>Login</button>
      <button className='botaoGoogle' onClick={aoCrud}>Entrar com Google</button>

    </div>
  )
}

