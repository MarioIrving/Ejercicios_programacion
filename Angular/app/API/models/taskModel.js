var mongoose = require('mongoose');
var Shema = mongoose.Schema;

var tasksModel = new Shema({
	name: {type: String},
	isCompleted: {type : Boolean}
});

module.exports = mongoose.model('tasks', tasksModel);

