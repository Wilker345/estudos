import * as React from 'react';
import Box from '@mui/material/Box';
import Button from '@mui/material/Button';
import Modal from '@mui/material/Modal';
import { TextField, IconButton, Typography } from '@mui/material';
import Axios from 'axios';
import { useState } from 'react';
import EditIcon from '@mui/icons-material/Edit';

export default function Update(empresa) {
  const [open, setOpen] = React.useState(false);
  const handleOpen = () => setOpen(true);
  const handleClose = () => setOpen(false);
  const[nome, setNome] = useState('')
  const[nomeError, setNomeError] = useState(false)

  const handleSubmit = (e) =>{
    e.preventDefault()
    setNomeError(false)

    if ( !nome ){
      setNomeError(true)
      return
    }

    if (nome) {
      setNomeError(false)
    }

    Axios.patch(`http://localhost:3001/companies/patch/:${empresa}`, {
      cnpj: empresa,
      name: nome
      });

    handleClose()
  }
  const style = {
    position: 'absolute',
    top: '50%',
    left: '50%',
    transform: 'translate(-50%, -50%)',
    width: 400,
    bgcolor: 'background.paper',
    boxShadow: 24,
    p: 4,
    borderRadius: 4
  };



  return (
    <div>
      <IconButton onClick={handleOpen}>
      <EditIcon/>
      </IconButton>
      <form NoValidate autoComplete="off" onSubmit={handleSubmit}>
      <Modal
        open={open}
        onClose={handleClose}
        aria-labelledby="modal-modal-title"
        aria-describedby="modal-modal-description"
        >
        <Box sx={style}>
          <Typography id="modal-modal-title" variant="h6" component="h2">
            Atualizar nome da Empresa
          </Typography>
          <TextField
          sx={{
            left: '25%',
            marginTop: 2,
            marginBottom: 2,
            display: 'block'
            }}
          onChange={(e) => setNome(e.target.value)}
          label="Novo nome"
          type='text'
          variant="outlined"
          required
          error={nomeError}
          />
          <Button
          sx={{
            left: '42%',
            marginBottom: 1,
            }}
          type='submit'
          variant='contained'
          className='botaoEnviarEmpresa'
          onClick={handleSubmit}
          >Enviar
          </Button>
        </Box>
      </Modal>
      </form>
    </div>
  );
}
