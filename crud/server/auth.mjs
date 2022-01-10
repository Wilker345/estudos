import passport from 'passport';
import dotenv from 'dotenv';
import { User } from './models/User.mjs'

dotenv.config();

import GoogleStrategy from 'passport-google-oidc';

passport.use(new GoogleStrategy({
    clientID: process.env.GOOGLE_CLIENT_ID,
    clientSecret: process.env.GOOGLE_CLIENT_SECRET,
    callbackURL: "http://localhost:3001/google/callback",
  },
  async function verify(issuer, profile, cb){
    console.log(profile)
    console.log(profile.emails[0].value)
    console.log(profile.name.givenName)
    try{
      const user = await User.findOne({
      where: {
        email: profile.emails[0].value
      }
    })
    console.log('Usuário encontrado: ', user)
    if (!user){
      await User.create({
        token: profile.id,
        email: profile.emails[0].value,
        name: profile.name.givenName
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
