(() => {
    angular
        .module('app.autos', ['ui.router'])
        .config(routeConfig);

    routeConfig.$inject = ['$stateProvider', '$urlRouterProvider'];

    function routeConfig($stateProvider, $urlRouterProvider) {
        //$urlRouterProvider.otherwise('/app');
        $stateProvider

            .state({
                name: 'app.autos',
                url: '/autos',
            })
            
            .state({
                name: 'app.autos.list',
                url: '/list',
                templateUrl: './app/modules/autos/auto-list/auto.list.html',
                controller: 'AutoListCtrl',
                controllerAs: 'vm'
            })

            // .state({
            //     name: 'app.autos.create',
            //     url: '/create',
            //     templateUrl: './auto-create/auto.create.html',
            //     controller: 'AutoCreateCtrl',
            //     controllerAs: 'vm'
            // })
    }

})();