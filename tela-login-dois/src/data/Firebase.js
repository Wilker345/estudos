import firebase from 'firebase';
import 'firebase/compat/auth';
import 'firebase/compat/firestore';
import 'firebase/compat/database';

const firebaseConfig = {
  apiKey: "AIzaSyBgmigG0C5hCdF5VM3g9Q4GijkmhN0wvmI",
  authDomain: "login-1f8ec.firebaseapp.com",
  databaseURL: "https://login-1f8ec-default-rtdb.firebaseio.com",
  projectId: "login-1f8ec",
  storageBucket: "login-1f8ec.appspot.com",
  messagingSenderId: "776526896946",
  appId: "1:776526896946:web:f57b7799e24900b7ec412b"
};

firebase.initializeApp(firebaseConfig);

export const auth = firebase.auth();
export const database = firebase.database();
