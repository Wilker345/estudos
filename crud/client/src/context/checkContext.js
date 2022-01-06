import React, {createContext} from 'react'
export const CheckContext = createContext();

export default function CheckProvider (props){

  return(
    <CheckContext.Provider>
      {props.children}
    </CheckContext.Provider>
  )
}

