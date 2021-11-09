import React, {useState} from 'react'
import { getAuth, createUserWithEmailAndPassword } from "firebase/auth";
import {Button, Container} from '@material-ui/core'

import TextField from '@mui/material/TextField'
import '../styles/global.scss'
export function Cadastro(){


  const[email, setEmail] = useState('')
  const[pass, setPass] = useState('')

  const[emailError, setEmailError] = useState(false)
  const[passError, setPassError] = useState(false)

  function createUser(){
    const auth = getAuth();
    createUserWithEmailAndPassword(auth, email, pass)
    .then((userCredential) => {
      const user = userCredential.user;
    })
    .catch((error) => {
      const errorCode = error.code;
      const errorMessage = error.message;
    });
  }

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

      <TextField
      sx={{
        marginTop: 2,
        marginBottom: 2,
        display: 'block'
        }}
      onChange={(e) => setEmail(e.target.value)}
      label="e-mail"
      variant="outlined"
      color="primary"
      required
      error={emailError}
      />

      <TextField
      sx={{
        marginTop: 2,
        marginBottom: 2,
        display: 'block'
        }}
      onChange={(e) => setPass(e.target.value)}
      label="Senha"
      variant="outlined"
      color="primary"
      required
      error={passError}
      />

      <Button
        sx={{
          marginBottom: 1,
        }}
        onClick={createUser}
        type="submit"
        color="primary"
        variant="contained"

        >
        Cadastre-se
      </Button>

    </form>
    </Container>
  )
}
