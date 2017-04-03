#include <iostream>
#include <cstdlib>

using namespace std;

struct Pilas{
    int numEntero;
    Pilas *siguiente;
};

Pilas *nuevaCaja();
Pilas *push(Pilas *inicio, int dato);
Pilas *push(Pilas *inicio);
void imprime(Pilas *inicio);

int main()
{
    Pilas *PilaA=NULL, *PilaB=NULL, *q;

    for(int i=1; i<5; i+=1){
        PilaA=push(PilaA, i);
        PilaB=push(PilaB);
    }

    cout<<endl;
    cout<<"Pila A"<<endl;
    imprime(PilaA);

    cout<<endl;
    cout<<"Pila B"<<endl;
    imprime(PilaB);

    q=PilaB;

    while(PilaA!=NULL && q!=NULL){
        q->numEntero=PilaA->numEntero;
        PilaA=PilaA->siguiente;
        q=q->siguiente;
    }

    cout<<endl;
    cout<<"Pila A"<<endl;
    imprime(PilaA);

    cout<<endl;
    cout<<"Pila B"<<endl;
    imprime(PilaB);

   return 0;

}

Pilas *nuevaCaja(){

    Pilas *q;
    q=new Pilas();
    if(q==NULL)
        return NULL;
    else
        return q;
}

Pilas *push(Pilas *inicio,int dato){

    Pilas *q;

    q=nuevaCaja();
    q->numEntero=dato;
    q->siguiente=inicio;
    inicio=q;

    return q;
}
Pilas *push(Pilas *inicio){

    Pilas *q;

    q=nuevaCaja();
    q->siguiente=inicio;
    inicio=q;

    return q;
}

void imprime(Pilas *inicio){

    Pilas *q;

    q=inicio;
    while(q!=NULL){
        cout<<q->numEntero<<endl;
        q=q->siguiente;
    }
}
