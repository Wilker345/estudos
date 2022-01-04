import React, {useState, createContext, useEffect} from 'react'
export const CheckContext = createContext();

export default function CheckProvider (props){
  const [del, setDel] = useState(false);

  return(
    <CheckContext.Provider value={del}>
      {props.children}
    </CheckContext.Provider>
  )
}

