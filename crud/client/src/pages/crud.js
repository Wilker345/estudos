import React, { useState, useEffect } from 'react';
import {Typography, Container, Button, TextField} from '@mui/material';
import {Table, TableBody, TableCell, TableContainer, TableHead, TableRow, Paper} from '@mui/material'
import '../Styles.css';
import Axios from 'axios'


export function Crud() {
  const[cnpj, setCnpj] = useState('')
  const[nome, setNome] = useState('')
  const[listaEmpresas, setListaEmpresas] = useState([])
  const[nomeNovo, setNomeNovo] = useState('')
  const columns = [
    { title: 'nome', field: 'Empresa',},
    { title: 'cnpj', field: 'CNPJ',}
  ]

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
    <Container>
    <div className="Crud">
    <Typography
    component="h1"
    variant="h5"
    >Crud para Empresas
    </Typography>

      <div className="form">
      <TextField
      sx={{
        marginTop: 2,
        marginBottom: 2,
        display: 'block'
        }}
      onChange={(e) => setCnpj(e.target.value)}
      label="CNPJ"
      type='text'
      variant="outlined"
      required
      />
      <TextField
      sx={{
        marginTop: 2,
        marginBottom: 2,
        display: 'block'
        }}
      onChange={(e) => setNome(e.target.value)}
      label="Nome da Empresa"
      type='text'
      variant="outlined"
      required
      />
      <Button
      sx={{
        marginBottom: 1,
        }}
      variant='contained'
      className='botaoEnviarEmpresa'
      onClick={submitEmpresa}
      >Criar
      </Button>

        {listaEmpresas.map((val)=> {
          return(
            <div className="card">
            <Typography
            variant="h6"
            >
            Nome: {val.nome} | CNPJ: {val.cnpj}
            </Typography>
            <Button
            variant='contained'
            size='small'
            color='error'
            onClick={deleteEmpresa(val.cnpj)}
            >Deletar
            </Button>
            <TextField
            sx={{
            marginTop: 2,
            marginBottom: 2,
            display: 'block'
            }}
            onChange={(e) => setNomeNovo(e.target.value)}
            label="Novo nome"
            type='text'
            variant="outlined"
            />
            <Button
            sx={{
            marginBottom: 1,
            }}
            variant='contained'
            className='botao'
            onClick={() => {mudarNomeEmpresa(val.nome)}}
            >Atualizar
            </Button>
            <br/>
            </div>
          )
        })}
      </div>

    </div>
    </Container>
  );
}


