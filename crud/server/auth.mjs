import passport from 'passport';
import dotenv from 'dotenv';
import { User } from './models/User.mjs'

dotenv.config();

import { OAuth2Strategy as GoogleStrategy } from 'passport-google-oauth';

passport.use(new GoogleStrategy({
    clientID: process.env.GOOGLE_CLIENT_ID,
    clientSecret: process.env.GOOGLE_CLIENT_SECRET,
    callbackURL: "http://localhost:3001/google/callback",
  },

  async function(accessToken, refreshToken, profile, cb) {
    console.log(profile)
    try{
      const user = await User.findOne({
      where: {
        email: profile._json.email
      }
    })
    console.log('Usuário encontrado: ', user)
    if (!user){
      await User.Create({
        where: {
        token: accessToken,
        email: profile._json.email,
        name: profile._json.name
        }
      });
    }

    }catch(e){
      console.log(e)
    }
    cb(null, profile)
  },

passport.serializeUser(function(user, cb){
  cb(null, user);
}),

passport.deserializeUser(function(user, cb){
  cb(null, user);
})

))
