import express from 'express';
import session from 'express-session';
import cors from 'cors';
import { companyRoutes } from "./routes/company.mjs";
import dotenv from 'dotenv';
import './auth.mjs';
import passport from 'passport';


const app = express();
dotenv.config();


function isLoggedIn(req, res, next) {
  req.user ? next(): res.sendStatus(401);
}

app.use(cors())
app.use(express.json())
app.use("/companies", companyRoutes);


//Sessão de login
app.use(session( {
  secret: process.env.SECRET,
  saveUninitialized: false,
  resave: true,
  cookie: { secure: 'auto'}
}));
app.use(passport.initialize());
app.use(passport.session());

app.get('/login', (req, res) =>{
  res.send('<a href="/auth/google">Autenticação com Google</a>')
});

app.get('/crudBack', isLoggedIn, (req, res) => {
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
    successRedirect: '/crud',
    failureRedirect: '/auth/failure',
  })
);

app.get('/auth/failure', (req, res) => {
  res.send('erro com o login');
});

app.listen(3001, ()=>{
  console.log("running on port 3001");
})

