const sucessLoginUrl = "http://localhost:3000/table";
const failedLoginUrl = "http://localhost:3000/loginFailed";
const router = express.Router();


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

router.get('/loginFailed', (req, res) => {
  res.send('erro com o login');
});
