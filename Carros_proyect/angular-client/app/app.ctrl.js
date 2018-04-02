(() => {
    'use strict';

    angular
        .module('app')
        .controller('AppCtrl', MainController);

    MainController.$inject = ['AppService'];

    function MainController(AppService) {
        //variables
        var app = this;

        console.log('Hey! Im the main controller')

        //start function
        start();

        //internal functions

        function getAutos() {
            AppService
                .get('api/auto', callbackFunction);

            function callbackFunction(err, data) {
                console.log(data);
            }
        }

        function start() {
            getAutos();
        }
    }
})();