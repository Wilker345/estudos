export function getList(){
  return fetch('http://localhost:3333/list')
  .then(data => data.json())
}
