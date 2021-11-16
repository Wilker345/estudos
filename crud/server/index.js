const express = require('express');
const app = express();
const mysql = require('mysql')
const cors = require('cors')

const db = mysql.createPool({
  host: "localhost",
  user: "root",
  password: "password",
  database: "cruddatabase",
});

app.use(cors())
app.use(express.json())
app.use(express.urlencoded({
  extended: true
}));

app.get("/", (req, res)=>{
  res.send("tela inicial alcançada com sucesso");
})

app.get("/api/get", (req, res)=>{
const sqlInsert =
  "SELECT * FROM dados_empresa";
  db.query(sqlInsert, (err, result)=>{
    res.send(result);
  });
});



app.post("/api/insert", (req, res)=>{

const nome = req.body.nome
const cnpj = req.body.cnpj


  const sqlInsert =
   "INSERT INTO dados_empresa (cnpj, nome) VALUES (?, ?)";
  db.query(sqlInsert, [cnpj, nome], (err, result)=>{
    console.log(result);
  });
});

app.delete("/api/delete/:cnpj", (req, res) => {
  const empresa = req.params.cnpj;
  const sqlDelete = "DELETE FROM dados_empresa WHERE cnpj = ?";

   db.query(sqlDelete, empresa, (err, result) =>{
    if (err) console.log(err);
   });
});

app.put("/api/update", (req, res) => {
  const empresa = req.body.cnpj;
  const novoNome = req.body.nome;
  const sqlUpdate = "UPDATE SET dados_empresa nome = ? WHERE cnpj = ?";

   db.query(sqlUpdate, [novoNome, empresa], (err, result) =>{
    if (err) console.log(err);
   });
});




app.listen(3001, ()=>{
  console.log("running on port 3001");
})
