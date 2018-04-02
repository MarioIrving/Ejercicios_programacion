(() => {
    angular
        .module('app', ['app.autos','ui.router'])
        .config(routeConfig);

    routeConfig.$inject = ['$stateProvider', '$urlRouterProvider'];

    function routeConfig($stateProvider, $urlRouterProvider) {
        $urlRouterProvider.otherwise('/app');
        $stateProvider.state({
            name: 'app',
            url: '/app',
            templateUrl: './app/app.html',
            controller: 'AppCtrl',
            controllerAs: 'app'
        })
    }

})();