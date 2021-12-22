import React, { useState, useEffect } from 'react';
import {Typography, Container, Button, TextField} from '@mui/material';
import {List, ListItem, ListItemIcon, IconButton, Box} from '@mui/material'
import DeleteIcon from '@mui/icons-material/Delete';
import EditIcon from '@mui/icons-material/Edit';
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
      name: nome,
    });

  setListaEmpresas([
    ...listaEmpresas,
    {name: nome, cnpj: cnpj}
    ]);
  };

  const deleteEmpresa = (empresa) => {
    Axios.delete(`http://localhost:3001/companies/delete/:${empresa}`);
  }

  const mudarNomeEmpresa = (empresa) => {
    Axios.patch(`http://localhost:3001/companies/patch/:${empresa}`, {
      cnpj: empresa,
      name: nomeNovo
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
      <Box sx={{ bgcolor: 'text.main' }}>
      <List>
        {listaEmpresas.map(val => (
          <ListItem
          key={val.cnpj}

          >
          <TextField label={val.name} size='small' variant='standard'
            onChange={(e) => setNomeNovo(e.target.value)}
          />
          <ListItemIcon>
          <IconButton
          onClick={() => {deleteEmpresa(val.cnpj)}}>
          <DeleteIcon/>
          </IconButton>
          <IconButton
          onClick={() => {mudarNomeEmpresa(val.cnpj)}}>
          <EditIcon/>
          </IconButton>
          </ListItemIcon>
          </ListItem>
        ))}
      </List>
      </Box>
      </div>

    </div>
    </Container>
  );
}


