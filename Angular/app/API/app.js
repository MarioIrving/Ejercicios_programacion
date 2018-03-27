

var express = require('express');
var bodyParser = require('body-parser');
var mongoose = require ('mongoose');
var app=express();

var tasksModel = require('./models/taskModel.js');

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended : false }));

app.use(express.static('../angular-client/'));

mongoose.connect('mongodb://localhost/tasks', function(err){
	if(err) return console.log('Error', err);
	console.log("Conexion a la base de datos!");
});

var tasks=[
	{
		name:'Mi primer tarea',	
		iscompleted: true
	}
];

app.get('/tasks',function(req,res){
	tasksModel.find({}, function(err,tasks){
		if(err) return res.status(500).send({err : err});
		res.send(tasks);
	});		
});

app.post('/tasks', function(req,res){
	tasksModel.create(req.body, function(err){
		if(err) return res.status(500).send({err : err});
		res.send({ success : true});
	});

	// tasks.push(req.body);
	// res.send({ success : true});
});

app.get('/task2', function(req,res){
	tasksModel.find({name: {$regex:req.body.buscar}}, function(err, response){
		if(err) return res.status(500).send({err : err});
		console.log(response);
		res.send(response);
	});

	// tasks.push(req.body);
	// res.send({ success : true});
});

app.put('/tasks',function(req,res){

	tasksModel.update({_id : req.body._id}, req.body, function(err){
		if(err) return res.status(500).send({err : err});
		res.send({ success : true});
	});

/*	for (var i = 0 ; i < tasks.length; i++) {
	 	if (tasks[i].name===req.body.name) {
	 		tasks[i] = req.body;
	 		break;
	 	}
	}*/
});


app.post('/minombre',function(req,res){

	res.send('POST Mi nombre es '  + JSON.stringify(req.body));
});


app.listen(3000, function(){
	console.log('Servidor corriendo en el puerto 3000');
});

//app.get('/',function(req,res){

	// res.send('Hola Mundo!');
 // });

// app.get('/minombre',function(req,res){

// 	res.send('Mi nombre es '  + req.query.name);
// }
//);
 	
// app.get('/minombre/:name',function(req,res){

// 	res.send('Mi nombre es '  + req.params.name);	
// });

// console.log('hola mundo');

//--------------------------------------
// function unProceso(name){

// 	return "Mi nombre es: " + name;
// }


// var response = unProceso('Julio');

// console.log(response);

//-------------------------------------
// function unProceso(name, callback){

// 	setTimeout(function()
// 	{
// 		callback("Mi nombre es: " + name);
	
// 	});
// }


// unProceso ('Julio', function(response){
// 	console.log(response);
// });

//-------------------------

// function unProceso(name, callback){
// 	console.log('pasa1');

// 	setTimeout(function() {

// 		console.log('pasa2');
// 		callback("Mi nombre es: " + name);
	
// 	}, 3000);

// 	return "returnprincipal";
// }


// unProceso ('Julio', function(response){
// 	console.log(response);
// });

//---------------------

// function unProceso(name, callback){

// 	setTimeout(function() {
// 		setTimeout(function() {
// 			callback("Mi nombre es: " + name);
	
// 		}, 4000);
// 	}, 1000);

// 	return "returnprincipal";
// }


// var responsePrincipal= unProceso('Julio', function(response){
// 	console.log(response);
// });