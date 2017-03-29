/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LibOrdena.h
 * Author: Mario
 *
 * Created on 19 de marzo de 2017, 10:21 AM
 */
#include <cstdlib>
#include <iostream>

#ifndef LIBORDENA_H
#define LIBORDENA_H

int *inicializaLista(int &sizeArreglo) {
    int *lista;

    cout << "De que tamano es tu lista: ";
    cin>>sizeArreglo;

    lista = new int [sizeArreglo];

    for (int i = 0; i < sizeArreglo; i += 1) {
        cout << "Dame el elemento " << (i + 1) << " de la lista: ";
        cin >> lista[i];
    }
    return lista;
}

void metodoIntercambio(int sizeArreglo, int *lista){

    int temp;
    for(int i=0; i<sizeArreglo-1; i+=1){
        for(int j=i+1; j<sizeArreglo; j+=1){
            if(lista[i]>lista[j]){
                temp=lista[i];
                lista[i]=lista[j];
                lista[j]=temp;
            }
        }       
    }

}

void metodoSeleccion(int sizeArreglo, int *lista){

   int temp, menor;

    for(int i=0;i<sizeArreglo-1; i+=1){
            menor=i;
        for ( int j=i+1; j<sizeArreglo; j+=1){   
            if (lista[j]<lista[menor])
                menor=j;            
        }
            if(i!=menor){
            temp=lista[i];
            lista[i]=lista[menor];
            lista[menor]=temp;
            }
    }
}



void imprimeLista(int sizeArreglo, int *lista) {
    cout << endl;
    cout << "Los elementos de la lista son: " << endl;
    for (int i = 0; i < sizeArreglo; i += 1)
        cout << lista[i] << ", ";
}


#endif /* LIBORDENA_H */

