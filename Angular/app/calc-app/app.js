var app =  angular.module("calcApp", []);

	app.controller("calcCtrl",calcCtrl );

	function calcCtrl(){

		this.ButtonClicked=function(button){

			this.selectedOperation = button;
		}

		console.log("Mi primer controlador");

	}