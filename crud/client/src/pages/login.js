import { useHistory } from 'react-router';
import React from "react";
import { useState } from 'react';
import {Typography, Container, Button, TextField} from '@mui/material';
import GoogleIcon from '@mui/icons-material/Google';
import '@fontsource/roboto/300.css';
import '@fontsource/roboto/400.css';
import '@fontsource/roboto/500.css';
import '@fontsource/roboto/700.css';


export function Login (){
  const[email, setEmail] = useState('')
  const[pass, setPass] = useState('')

  const[emailError, setEmailError] = useState(false)
  const[passError, setPassError] = useState(false)

  const history = useHistory();
  function aoCrud() {
    history.push('/crud');
  };

  const handleSubmit = (e) =>{
    e.preventDefault()
    setEmailError(false)
    setPassError(false)

    if ( email === ''){
      setEmailError(true)
    }
    if ( pass === ''){
      setPassError(true)
    }

    if (email && pass) {
      console.log(email, pass)

    }
  }

  return(
    <Container>
    <form noValidate autoComplete="off" onSubmit={handleSubmit} className='telaLogin'>
    <Typography
    component="h1"
    variant="h5"
    >Tela de Login
    </Typography>
      <TextField
      sx={{
        marginTop: 2,
        marginBottom: 2,
        display: 'block'
        }}
      fullWidth
      label="Email"
      type='text'
      variant="outlined"
      required
      error={emailError}
      />
      <TextField
      sx={{
        marginBottom: 2,
        display: 'block'
        }}
      fullWidth
      label="Senha"
      type='text'
      variant="outlined"
      required
      error={passError}
      />
      <Button
      sx={{
        marginBottom: 1,
        }}
      variant='contained'
      className='botaoLogin'
      onClick={aoCrud}
      >Login
      </Button>

      <Button
      variant='contained'
      size='large'
      color='error'
      startIcon={<GoogleIcon/>}
      onClick={aoCrud}
      >Entrar com Google
      </Button>
      </form>
      </Container>
  )
}

