import DataGrid from "react-data-grid";
import { useState, useEffect } from "react";
import Axios from 'axios'
export function Grid() {
  const[listaEmpresas, setListaEmpresas] = useState([])
  useEffect(() => {
    Axios.get("http://localhost:3001/companies").then((response)=>{
      setListaEmpresas(response.data.data)
    })
  }, [])
  const columns = [
    { key: "cnpj", name: "CNPJ" },
    { key: "nome", name: "Nome da Empresa" },
 ];

 const rows = [
    { cnpj: 0, nome: "Um" },
    { cnpj: 1, nome: "Dois" }
 ];
   return <DataGrid columns={columns} rows={rows} />;
}
