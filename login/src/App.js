import { BrowserRouter, Route, Routes } from 'react-router-dom';
import { Login } from "./pages/login";
import { Sucesso } from "./pages/sucesso";
import { Cadastro } from "./pages/cadastro";
import { LoginProvider } from './contexts/loginContext';

function App() {

  return (
  <BrowserRouter>
      <Route exact path="/"  component={Login} />
      <Route path="/cadastro" component={Cadastro} />
      <Route path="/sucesso" component={Sucesso} />
  </BrowserRouter>

  );
}

export default App;
