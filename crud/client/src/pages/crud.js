import React, { useState, useEffect } from 'react';
import '../Styles.css';
import Axios from 'axios'


export function Crud() {
  const[cnpj, setCnpj] = useState('')
  const[nome, setNome] = useState('')
  const[listaEmpresas, setListaEmpresas] = useState([])
  const[nomeNovo, setNomeNovo] = useState('')

  useEffect(() => {
    Axios.get("http://localhost:3001/companies").then((response)=>{
      setListaEmpresas(response.data.data)
    })
  }, [])
  const submitEmpresa = () => {
    Axios.post("http://localhost:3001/companies", {
      cnpj: cnpj,
      nome: nome,
    });

  setListaEmpresas([
    ...listaEmpresas,
    {nome: nome, cnpj: cnpj}
    ]);
  };

  const deleteEmpresa = (delEmpresa) => {
    Axios.delete(`companies/:${delEmpresa}`)
  }

  const mudarNomeEmpresa = (empresa) => {
    Axios.put(`companies/:${empresa}`, {
      cnpj: empresa,
      nome: nomeNovo,
    });
    setNomeNovo('');
  }

  return (
    <div className="Crud">
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
          <br/>
          <button className="botao" onClick={() => {deleteEmpresa(val.cnpj)}}>Delete</button>
          <br/>
          <input type="text" id="updateInput" onChange={ (e) => {
            setNomeNovo(e.target.value)
          }} />
          <br/>
          <button className="botao" onClick={() => {mudarNomeEmpresa(val.nome)}}>Update</button>
          </div>
          )
        })}
      </div>

    </div>
  );
}


