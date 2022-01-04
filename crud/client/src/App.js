import { BrowserRouter, Route } from 'react-router-dom';
import { Crud } from './pages/crud';
import { Login } from './pages/login';
import { Grid } from './pages/datagrid'
import BasicTable from './pages/materialTable';
import Check from './components/check'
import CheckProvider, { CheckContext } from './context/checkContext';

function App() {

  return (
  <BrowserRouter>
    <CheckContext.Provider>
      <Route exact path="/"  component={Login} />
      <Route path="/crud" component={Crud} />
      <Route path="/grid" component={Grid} />
      <Route path="/table" component={BasicTable} />
      <Route path="/check" component={Check} />
    </CheckContext.Provider>
  </BrowserRouter>
  );
}

export default App;
