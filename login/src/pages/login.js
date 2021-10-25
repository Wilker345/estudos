import React, {useState} from 'react'
import googleIconImg from '../images/google-icon.svg';
import {firebase} from '../data/firebase'
import { signInWithPopup, GoogleAuthProvider } from "firebase/auth";
import {Button, Container} from '@material-ui/core'
import { makeStyles } from '@material-ui/styles'
import TextField from '@mui/material/TextField'


const provider = new GoogleAuthProvider();
firebase.auth().signInWithPopup(provider).then(result => {
  const token = result.credential.accessToken;
  const user = result.user;
})

const useStyles = makeStyles({
  field: {
    marginTop: 20,
    marginBotton: 20,
    display: 'block'
  }
})


export function Login(){
  const classes = useStyles()

  const[email, setEmail] = useState('')
  const[pass, setPass] = useState('')

  const[emailError, setEmailError] = useState(false)
  const[passError, setPassError] = useState(false)

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
    <form noValidate autoComplete="off" onSubmit={handleSubmit}>

      <TextField
      className={classes.field}
      Login
      onChange={(e) => setEmail(e.target.value)}
      label="e-mail"
      variant="outlined"
      color="primary"
      required
      error={emailError}
      />

      <TextField
      className={classes.field}
      Login
      onChange={(e) => setPass(e.target.value)}
      label="Senha"
      variant="outlined"
      color="primary"
      required
      error={passError}
      />

      <Button
        type="submit"
        color="primary"
        variant="contained"
        >
        Login
      </Button>

      <Button
        onClick={signInWithPopup}
        type="submit"
        color="secondary"
        variant="contained"
        
        >
        Conecte-se com seu g-mail
      </Button>
    </form>
    </Container>
  )
}

{/*
Lista de dúvidas:
- o Hook useStyles que deveria sobrecrever características CSS não funciona
- popUp do googleAuth ainda surge no inicio da execução
- o MaterialUi está com a biblioteca desatualizada na documentação do site, muitos
imports causam erro de documentaçao pois estão errados, sobretudo com arquivos.svg
por isso não há o icone do google que tinha anteriormente
*/}
