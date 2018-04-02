(() => {
    angular
        .module('app.autos', ['ui.router'])
        .config(routeConfig);

    routeConfig.$inject = ['$stateProvider', '$urlRouterProvider'];

    function routeConfig($stateProvider, $urlRouterProvider) {
        //$urlRouterProvider.otherwise('/app');
        $stateProvider

            .state('autoList', {
                name: 'app.autos.list',
                url: '/autos/list',
                templateUrl: './app/modules/autos/auto-list/auto.list.html',
                controller: 'AutoListCtrl',
                controllerAs: 'vm'
            })

            .state('autoCreate', {
                name: 'app.autos.create',
                url: '/autos/create',
                templateUrl: './app/modules/autos/auto-create/auto.create.html',
                controller: 'AutoCreateCtrl',
                controllerAs: 'vm'
            })
    }

})();