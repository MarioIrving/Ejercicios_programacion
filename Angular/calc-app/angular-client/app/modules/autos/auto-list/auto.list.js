(() => {
    'use strict';

    angular
        .module('app.autos')
        .controller('AutoListCtrl', AutoListCtrl);

    AutoListCtrl.$inject = ['AutoService'];

    function AutoListCtrl(AutoService) {
        //variables
        var vm = this;

        console.log('Hey! Im the auto-list controller')

        //start function
        start();

        function start() {
            
        }
    }
})();