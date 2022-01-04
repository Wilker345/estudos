import * as React from 'react';
import Box from '@mui/material/Box';
import Button from '@mui/material/Button';
import Modal from '@mui/material/Modal';
import { TextField } from '@mui/material';
import Axios from 'axios';
import { useState } from 'react';


export default function Create() {
  const [open, setOpen] = React.useState(false);
  const handleOpen = () => setOpen(true);
  const handleClose = () => setOpen(false);
  const[cnpj, setCnpj] = useState('')
  const[nome, setNome] = useState('')
  const[cnpjError, setCnpjError] = useState(false)
  const[nomeError, setNomeError] = useState(false)

  const handleSubmit = (e) =>{
    e.preventDefault()
    setCnpjError(false)
    setNomeError(false)

    if ( cnpj === ''){
      setCnpjError(true)
      return
    }
    if ( nome === ''){
      setNomeError(true)
      return
    }
    if (cnpj && nome) {
      console.log(cnpj, nome)

    }
  }

  const style = {
    position: 'absolute',
    top: '50%',
    left: '50%',
    transform: 'translate(-50%, -50%)',
    width: 400,
    bgcolor: 'background.paper',
    border: '2px solid #000',
    boxShadow: 24,
    p: 4,
  };

  const submitEmpresa = () => {
    Axios.post("http://localhost:3001/companies", {
      cnpj: cnpj,
      name: nome
    },
    handleClose())}

  return (
    <div>
      <Button variant='contained' onClick={handleOpen}>Criar</Button>
      <form NoValidate autoComplete="off" onSubmit={handleSubmit}>
      <Modal
        open={open}
        onClose={handleClose}
        aria-labelledby="modal-modal-title"
        aria-describedby="modal-modal-description"
        >
        <Box sx={style}>
          <TextField
            sx={{
            left: '25%',
            marginTop: 2,
            marginBottom: 2,
            display: 'block'
            }}
          onChange={(e) => setCnpj(e.target.value)}
          label="CNPJ"
          type='text'
          variant="outlined"
          required
          error={cnpjError}
          />
          <TextField
          sx={{
            left: '25%',
            marginTop: 2,
            marginBottom: 2,
            display: 'block'
            }}
          onChange={(e) => setNome(e.target.value)}
          label="Nome da Empresa"
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
          onClick={submitEmpresa}
          >Criar
          </Button>
        </Box>
      </Modal>
      </form>
    </div>
  );
}
