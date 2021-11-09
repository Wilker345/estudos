import React, {useState, useContext, createContext} from 'react'

export const LoginContext = createContext();

function LoginProvider (props){
  const [loggedIn, setLoggedIn] = useState(false)
  return(
    <LoginContext.Provider value={loggedIn}>
      {props.children}
    </LoginContext.Provider>
  )
}
export default LoginProvider
