import React, { useState, useEffect, useContext } from 'react';
import {Typography, Container, Button, TextField} from '@mui/material';
import {List, ListItem, ListItemIcon, IconButton, Box} from '@mui/material'
import DeleteIcon from '@mui/icons-material/Delete';
import EditIcon from '@mui/icons-material/Edit';
import '../Styles.css';
import Axios from 'axios'
import Create from '../components/create'
import Check from '../components/check'
import { CheckContext } from '../context/checkContext';

export function Crud() {
  const[listaEmpresas, setListaEmpresas] = useState([])
  const[nomeNovo, setNomeNovo] = useState('')
  const [del, setDel] = useContext(CheckContext)

  useEffect(() => {
    Axios.get("http://localhost:3001/companies").then((response)=>{
      setListaEmpresas(response.data.data)
    })
  }, [])

  const deleteEmpresa = (empresa) => {
    if(del) {
      Axios.delete(`http://localhost:3001/companies/delete/:${empresa}`);
      setDel(false)
    }
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
    <Create/>
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

          <Check/>

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
    </Container>
  );
}


