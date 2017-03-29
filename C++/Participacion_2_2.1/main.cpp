#include <iostream>
#include <cstdlib>

using namespace std;
#define M 20

void ingresaValores(int *matriz);
void imprime(int *matriz);
void busquedaSecuencial(int dato, int *matriz);

int main()
{
    int matriz[M], valor;

    ingresaValores(matriz);
    imprime(matriz);

    cout<<"Dame el valor a buscar: ";
    cin>>valor;

    busquedaSecuencial(valor, matriz);
    return 0;
}

void ingresaValores(int *matriz){

    for(int i=0; i<M; i+=1){
        cout<<"Dame el valor "<<i+1<<endl;
        cin>>matriz[i];
    }
}

void imprime(int *matriz){
    for(int i=0; i<M; i+=1)
        cout<<matriz[i]<<" , ";
}

void busquedaSecuencial(int valor, int *matriz){
    int i=0;

    while(i<M && matriz[i]!=valor)
        i++;
    if(i>M-1)
        cout<<"El numero buscado no esta en la lista "<<endl;
    else
        cout<<"El numero buscado esta en la posicion "<<i+1<<endl;
}
