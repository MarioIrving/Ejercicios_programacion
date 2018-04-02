const express = require('express');
const app = express();

app.get('/', function(request, response) {
  response.send('Hello World!');
});

app.post('/productos', function(req, res) {
  res.send('Creamos un Producto');
});

app.put('/productos', function(req, res) {
  res.send('Actualizamos un Producto');
});

app.delete('/productos', function(req, res) {
  res.send('Borramos un Producto');
});

app.listen(3000, function() {
  console.log('Example app listening on port 3000!');
});
