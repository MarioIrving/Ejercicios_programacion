(() => {
    'use strict';

    angular
        .module('app.autos')
        .controller('AutoCreateCtrl', AutoCreateCtrl);

    AutoCreateCtrl.$inject = ['AutoService'];
    
    function AutoCreateCtrl(AutoService) {
        //variables
        var vm = this;

        console.log('Hey! Im the auto-create controller')

        //start function
        start();

        function start() {
            
        }
    }
})();