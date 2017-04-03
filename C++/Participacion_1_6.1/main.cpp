#include <iostream>

using namespace std;

float promedio (float *calific);

int main()
{
    float calific[7];

    for(int i = 0; i < 7; i+=1){
        cout << "Cual es la calificacion "<< i + 1<<" : ";
        cin >> calific[i];
    }
    cout << "Tu promedio es : " << promedio(calific)<<endl;

    return 0;
}
float promedio (float *calific){
    float aux=0;

    for(int i=0; i<7; i+=1)
         aux=aux+calific[i];
    return aux/7;
}
