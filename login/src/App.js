import { BrowserRouter, Route } from 'react-router-dom';

import { Login } from "./pages/login";
import { sucesso } from "./pages/sucesso";

function App() {

  return (
    <BrowserRouter>
        <Route path="/" exact={true} component={Login}/>
        <Route path="/sucesso" component={sucesso} />
    </BrowserRouter>
  );
}

export default App;
