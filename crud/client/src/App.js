
import React, { useState, useEffect } from 'react';
import './App.css';
import Axios from 'axios'

function App() {
  const[cnpj, setCnpj] = useState('')
  const[nome, setNome] = useState('')
  const[listaEmpresas, setListaEmpresas] = useState([])
  const[nomeNovo, setNomeNovo] = useState('')

  useEffect(() => {
    Axios.get("http://localhost:3001/api/get").then((response)=>{
      setListaEmpresas(response.data)
    })
  }, [])
  const submitEmpresa = () => {
    Axios.post("http://localhost:3001/api/insert", {
      cnpj: cnpj,
      nome: nome,
    });

  setListaEmpresas([
    ...listaEmpresas,
    {nome: nome, cnpj: cnpj}
    ]);
  };

  const deleteEmpresa = (delEmpresa) => {
    Axios.delete(`http://localhost:3001/api/delete/${delEmpresa}`)
  }

  const mudarNomeEmpresa = (nomeNovoEmpresa) => {
    Axios.put("http://localhost:3001/api/update", {})
  }

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

        {listaEmpresas.map((val)=> {
          return(
          <div className="card">
          nome: {val.nome} | CNPJ: {val.cnpj}
          <button className="botao" onClick={() => {deleteEmpresa(val.cnpj)}}>Delete</button>
          <button className="botao" onClick={() => {mudarNomeEmpresa(val.cnpj)}}>Update</button>
          </div>
          )
        })}
      </div>

    </div>
  );
}

export default App;
