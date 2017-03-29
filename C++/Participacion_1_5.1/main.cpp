#include <iostream>
#include <cstdlib>

using namespace std;
#define M 32

float  F_a_Centigrados(float grados);

int main()
{
    double farenheit;

    cout << "Programa para convertir grados Farenheit a centigrados"<<endl;
    cout << "Cual es la temperatura en grados Farenheit: ";
    cin >> farenheit;
    cout<<endl;
    cout << farenheit << " equivale a : " << F_a_Centigrados(farenheit) << " centigrados"<<endl;

    return 0;
}

float  F_a_Centigrados(float grados){
    return (grados-M)*5/9;
}
