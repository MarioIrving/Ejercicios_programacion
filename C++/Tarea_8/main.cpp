/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Mario
 *
 * Created on 19 de marzo de 2017, 10:19 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
#include "LibOrdena.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    int tamanio;
    int *lista_arreglo;
    
    lista_arreglo=inicializaLista(tamanio);
    metodoIntercambio(tamanio, lista_arreglo);
    metodoSeleccion(tamanio, lista_arreglo);
    imprimeLista(tamanio, lista_arreglo);
    

    return 0;
}

