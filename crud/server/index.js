const express = require('express');
const session = require('express-session');
const app = express();
const mysql = require('mysql')
const cors = require('cors');
const passport = require('passport');
require('dotenv').config()
require('./auth')

function isLoggedIn(req, res, next) {
  req.user ? next(): res.sendStatus(401);
}

const db = mysql.createPool({
  host: process.env.HOST,
  user: process.env.USER,
  password: process.env.PASSWORD,
  database: process.env.DATABASE
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
  const sqlUpdate = "UPDATE dados_empresa SET nome = ? WHERE nome = ?";

   db.query(sqlUpdate, [novoNome, empresa], (err, result) =>{
    if (err) console.log(err);
   });
});


//Sessão de login
app.use(session( {
  secret: process.env.SECRET,
  saveUninitialized: false,
  resave: true
}));
app.use(passport.initialize());
app.use(passport.session());

app.get('/login', (req, res) =>{
  res.send('<a href="/auth/google">Autenticação com Google</a>')
});

app.get('/protected', isLoggedIn, (req, res) => {
  res.send(`Olá, ${req.user.displayName}`);
});

app.get('/logout', (req, res) => {
  req.logOut();
  req.session.destroy();
  res.send('Logout efetuado com sucesso.');
})

app.get('/auth/google',
passport.authenticate('google', { scope: ['email', 'profile'] })
)

app.get('/google/callback',
  passport.authenticate('google', {
    successRedirect: '/protected',
    failureRedirect: '/auth/failure',
  })
);

app.get('/auth/failure', (req, res) => {
  res.send('erro com o login');
});

///Sessão de inicialização
app.listen(3001, ()=>{
  console.log("running on port 3001");
})
