import googleIconImg from '../images/google-icon.svg';
import {firebase} from '../data/firebase'
import { signInWithPopup, GoogleAuthProvider } from "firebase/auth";

const provider = new GoogleAuthProvider();

firebase.auth().signInWithPopup(provider).then(result => {
  const token = result.credential.accessToken;
  const user = result.user;
})

export function Login(){

  return(
    <main>
    <div>
      <form className="telaLogin">
      Login
        <input
        type="text"
        placeholder="e-mail do usuário"
        />
        <input
        type="text"
        placeholder="Senha"
        />
        <button className='botao' type="submit">
          Login
        </button>
        <button onClick={signInWithPopup} className="botaoLoginGoogle">
        <img src={googleIconImg} alt ="Logo do google" />
        Faça o login com seu gmail
      </button>
      </form>
    </div>
  </main>
  )
}

