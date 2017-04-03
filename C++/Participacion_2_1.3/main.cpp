#include <iostream>
#include <cstdlib>

using namespace std;

struct s_caja{
    int numEntero;
    s_caja *siguiente;
};

s_caja *nuevaCaja();
void imprime(s_caja *inicio);

int main()
{
    s_caja *inicio=NULL, *q=NULL, *p=NULL;

    for(int i=0; i<4; i+=1){

        q=new s_caja();
        q->numEntero=i;
        if(inicio==NULL)
            inicio=q;
        q->siguiente=p;
        p=q;
    }

    cout<<"El apuntador que apunta a la primera caja vale: " <<inicio->numEntero<<endl;
    cout<<"El apuntador que apunta a la ultima caja vale: "<<p->numEntero<<endl;
    cout<<"Los valores de la pila son: "<<endl;
    imprime(p);


    return 0;
}

s_caja *nuevaCaja(){

    s_caja *q;
    q=new s_caja();
    if(q==NULL)
        return NULL;
    else
        return q;
}

void imprime(s_caja *inicio){

    s_caja *q;

    q=inicio;
    while(q!=NULL){
        cout<<q->numEntero<<endl;
        q=q->siguiente;
    }
}
