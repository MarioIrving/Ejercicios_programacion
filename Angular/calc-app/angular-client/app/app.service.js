(() => {
    'use strict';

    angular
        .module('app')
        .service('AppService', MainService);

    MainService.$inject = ['$http'];
    
    function MainService($http) {

        return {
            get: get,
            post: post,
            put: put
        }

        function get(url, callback) {
            $http({
                method: 'get',
                url: url,
                headers: {}
            }).then(function (response) {
                callback(null, response.data);
            }, function (err) {
                callback(err);
            });
        }

        function post(url, body, callback) {
            $http({
                method: 'post',
                url: url,
                headers: {
                    'Content-Type': 'application/json; charset=utf-8'
                },
                data: body
            }).then(function (response) {
                callback(null, response.data);
            }, function (err) {
                callback(err);
            });
        }

        function put(url, body, callback) {
            $http({
                method: 'put',
                url: url,
                headers: {
                    'Content-Type': 'application/json; charset=utf-8'
                },
                data: body
            }).then(function (response) {
                callback(null, response.data);
            }, function (err) {
                callback(err);
            });
        }

    }
})();