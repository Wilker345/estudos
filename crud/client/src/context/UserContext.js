import React, {useState, createContext, useEffect} from 'react'
export const LoginContext = createContext();

function LoginProvider (props){
  const [user, setUser] = useState(null);

  useEffect( () => {
    //conteúdo que será atualizado pro user
  })

  return(
    <LoginContext.Provider value={user}>
      {props.children}
    </LoginContext.Provider>
  )
}
export default LoginProvider
