import { BrowserRouter, Route } from 'react-router-dom';
import { Crud } from './pages/crud';
import { Login } from './pages/login';
import GridTable from './pages/table';
import Check from './components/check'
import CheckProvider, { CheckContext } from './context/checkContext';
import {useState} from 'react'
import Create from './components/create'
import Temp from './pages/temp'

function App() {
  const [del, setDel] = useState(false);
  return (
  <BrowserRouter>
    <CheckProvider value={del}>
      <Route exact path="/"  component={Login} />
      <Route path="/crud" component={Crud} />
      <Route path="/table" component={GridTable} />
      <Route path="/check" component={Check} />
      <Route path="/create" component={Create} />
      <Route path="/temp" component={Temp}/>
    </CheckProvider>
  </BrowserRouter>
  );
}

export default App;
