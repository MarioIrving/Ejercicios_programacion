#include <iostream>
#include <cstdlib>

using namespace std;

struct pilaElementos{

    double elemento;
    int noCaja;
    pilaElementos *siguiente;
} *inicio=NULL, *q=NULL;

void inicializaLista();
void imprime();
void asigna();

int main()
{

    inicializaLista();
    asigna();
    imprime();

    return 0;
}

void inicializaLista(){
    for(int i=0; i<6; i+=1){
         q=new pilaElementos;
         q->elemento=0.0;
         q->noCaja=i+1;
         q->siguiente=inicio;
         inicio=q;
    }
}

void imprime(){
    q=inicio;
    while(q!=NULL){
        cout<<"Elemento "<<q->noCaja<<" : "<<q->elemento<<endl;
        q=q->siguiente;
    }
}

void asigna(){
    q=inicio;
    while(q!=NULL){
        cout<<"Dame el elemento "<<q->noCaja<<" : ";
        cin>>q->elemento;
        q=q->siguiente;
    }
}

