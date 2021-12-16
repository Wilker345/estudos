import React from 'react';
import ReactDOM from 'react-dom';
import App from './App';
import LoginProvider from './context/UserContext';


ReactDOM.render(
  <LoginProvider>
    <App />
  </LoginProvider>
  ,document.getElementById('root')
);


