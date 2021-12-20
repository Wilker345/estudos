
dotenv.config();
app.use(cors())
app.all('/*', function(req, res, next) {
  res.header("Access-Control-Allow-Origin", "*");
  next();
});
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
    successRedirect:  '/protected',
    failureRedirect: '/auth/failure',
  }),
);

app.get('/auth/failure', (req, res) => {
  res.send('erro com o login');
});
