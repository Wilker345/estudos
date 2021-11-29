import { BrowserRouter, Route } from 'react-router-dom';
import { Crud } from './pages/crud';
import { Login } from './pages/login';

function App() {

  return (
  <BrowserRouter>
      <Route exact path="/"  component={Login} />
      <Route path="/crud" component={Crud} />
  </BrowserRouter>
  );
}

export default App;
