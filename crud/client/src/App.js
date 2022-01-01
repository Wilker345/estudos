import { BrowserRouter, Route } from 'react-router-dom';
import { Crud } from './pages/crud';
import { Login } from './pages/login';
import { Grid } from './pages/datagrid'
function App() {

  return (
  <BrowserRouter>
      <Route exact path="/"  component={Login} />
      <Route path="/crud" component={Crud} />
      <Route path="/grid" component={Grid} />
  </BrowserRouter>
  );
}

export default App;
