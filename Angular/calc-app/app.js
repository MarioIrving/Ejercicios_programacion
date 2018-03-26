var app =  angular.module("calcApp", []);

	app.controller("calcCtrl",calcCtrl );

	function calcCtrl(){
		this.resultValue=0;
		this.ButtonClicked=function(button){
			this.selectedOperation = button;
		}

		this.computeResult = function (){

				var number1 = parseFloat(this.input1);
				var number2 = parseFloat(this.input2);

				if(this.selectedOperation === '+'){
					this.resultValue = number1 + number2;
				} else if(this.selectedOperation === '-'){
					this.resultValue = number1 - number2;
				} else if (this.selectedOperation === '*') {
					this.resultValue = number1 * number2;
				} else if (this.selectedOperation === '/') {
					this.resultValue = number1 / number2;
				}

		}

	}
