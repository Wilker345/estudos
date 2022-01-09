import { BrowserRouter, Route } from 'react-router-dom';
import { Login } from './pages/login';
import GridTable from './pages/table';

function App() {
  return (
  <BrowserRouter>
      <Route exact path="/"  component={Login} />
      <Route path="/table" component={GridTable} />
  </BrowserRouter>
  );
}

export default App;
