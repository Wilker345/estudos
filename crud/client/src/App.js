
import React, { useState, useEffect } from 'react';
import './App.css';
import Axios from 'axios'

function App() {
  const[cnpj, setCnpj] = useState('')
  const[nome, setNome] = useState('')

  const submitEmpresa = () => {
    Axios.post("http://localhost:3001", {cnpj: cnpj, nome: nome})
  };

  return (
    <div className="App">
      <h2>
        CRUD APPLICATION
      </h2>

      <div className="form">
        <label>CNPJ:</label>
        <input type="text" name="cnpj"
        onChange={(e) => {setCnpj(e.target.value)}} />

        <label>Nome da Empresa:</label>
        <input type="text" name="nomeEmpresa"
         onChange={(e) => {setNome(e.target.value)}} />


        <button onClick={submitEmpresa} > Enviar </button>
      </div>

    </div>
  );
}

export default App;
