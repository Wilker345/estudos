import routes from './routes.js'
import express from 'express';
import cors from 'cors';

const app = express();
app.use(cors())
app.use(express.json())

app.use(express.urlencoded({
  extended: false
 }));
app.use(routes)

app.listen(3001, ()=>{
  console.log("running on port 3001");
})
