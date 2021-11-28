import passport from 'passport';
import dotenv from 'dotenv';
import { User } from './models/User.mjs'
dotenv.config();

import { Strategy as GoogleStrategy } from 'passport-google-oauth2';

passport.use(new GoogleStrategy({
    clientID: process.env.GOOGLE_CLIENT_ID,
    clientSecret: process.env.GOOGLE_CLIENT_SECRET,
    callbackURL: "http://localhost:3001/google/callback",
    passReqToCallback   : true
  },

  function(accessToken, refreshToken, profile, cb) {
    User.findOrCreate({ googleId: profile.id }, function (err, user) {
      return cb(err, user);
    });
  },

  /*
  function(request, accessToken, refreshToken, profile, done) {
    return done(null, profile);
  }
));
*/

passport.serializeUser(function(user, done){
  done(null, user);
}),

passport.deserializeUser(function(user, done){
  done(null, user);
})
))
