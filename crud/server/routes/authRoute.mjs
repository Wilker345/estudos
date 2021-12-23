const sucessLoginUrl = "http://localhost:3000/crud";
const failedLoginUrl = "http://localhost:3000/loginFailed";
const router = express.Router();
dotenv.config();
app.use(cors())
app.use(session( {
  secret: process.env.SECRET,
  saveUninitialized: false,
  resave: true,
  cookie: { secure: 'auto'}
}));

app.use(passport.initialize());
app.use(passport.session());

router.get('/logout', (req, res) => {
  req.logOut();
  req.session.destroy();
  res.send('Logout efetuado com sucesso.');
})

router.get('/auth/google',
passport.authenticate('google', { scope: ['email', 'profile'] })
)

router.get('/google/callback',
  passport.authenticate('google', {
    successRedirect:  sucessLoginUrl,
    failureRedirect: failedLoginUrl
  }),
);

router.get('/auth/failure', (req, res) => {
  res.send('erro com o login');
});
