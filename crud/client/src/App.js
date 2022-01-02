import { BrowserRouter, Route } from 'react-router-dom';
import { Crud } from './pages/crud';
import { Login } from './pages/login';
import { Grid } from './pages/datagrid'
import BasicTable from './pages/materialTable';
import Create from './components/create'
import Check from './components/check'
function App() {

  return (
  <BrowserRouter>
      <Route exact path="/"  component={Login} />
      <Route path="/crud" component={Crud} />
      <Route path="/grid" component={Grid} />
      <Route path="/table" component={BasicTable} />
      <Route path="/check" component={Check} />
  </BrowserRouter>
  );
}

export default App;
