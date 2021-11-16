const express = require('express');
const app = express();
const mysql = require('mysql')

const db = mysql.createPool({
  host: "localhost",
  user: "root",
  password: "password",
  database: "cruddatabase",
})

app.post("/api/insert", (req, res)=>{
  const sqlInsert = "INSERT INTO dados_empresa (cnpj, nome) VALUES (?, ?)";
  db.query(sqlInsert, [cnpj, nome], (err, result)=>{

  })
} )

app.listen(3001, ()=>{
  console.log("running on port 3001");
})
