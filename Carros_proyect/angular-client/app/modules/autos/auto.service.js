(() => {
    'use strict';

    angular
        .module('app.autos')
        .service('AutoService', AutoService);

    AutoService.$inject = [];
    
    function AutoService() {

        return {
            
        }
    }
})();