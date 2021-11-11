import React, {useState, createContext, useEffect} from 'react'
import {firebase} from "../data/firebase";
export const LoginContext = createContext();

function LoginProvider (props){
  const [user, setUser] = useState(null);

  useEffect( () => { firebase
    .auth()
    .onAuthStateChanged(setUser)
  })

  return(
    <LoginContext.Provider value={user}>
      {props.children}
    </LoginContext.Provider>
  )
}
export default LoginProvider
