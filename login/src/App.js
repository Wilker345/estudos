import { BrowserRouter, Route, Routes } from 'react-router-dom';
import { Login } from "./pages/login";
import { Sucesso } from "./pages/sucesso";
import { Cadastro } from "./pages/cadastro";
import { LoginContext} from './contexts/loginContext';

function App() {

  return (
  <BrowserRouter>
    <LoginContext.Provider>
      <Route exact path="/"  component={Login} />
      <Route path="/cadastro" component={Cadastro} />
      <Route path="/sucesso" component={Sucesso} />
    </LoginContext.Provider>
  </BrowserRouter>
  );
}

export default App;
