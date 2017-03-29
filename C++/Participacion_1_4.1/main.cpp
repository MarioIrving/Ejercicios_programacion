#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

double funcionValorAbsoluto(double x, double y);
double funcionRaizSumaDosNumeros(double x, double y);
double funcionRaizSumaDosNumeros(double x, double y, double z);
double funcionPotenciaVariablesDosNumeros (double x, double y);

int main()
{
    double x, y, margen, area, anio;

    cout<<"Dame valor de x: ";
    cin>>x;
    cout<<"Dame valor de y: ";
    cin>>y;
    cout<<"Dame valor del area: ";
    cin>>area;
    cout<<"Dame valor del margen: ";
    cin>>margen;
    cout<<"Dame valor del anio: ";
    cin>>anio;

    cout<<"sqrt (x+y)= "<<funcionRaizSumaDosNumeros(x,y)<<endl;
    cout<< "x^(y+7)= "<< funcionPotenciaVariablesDosNumeros(x,y)<<endl;
    cout<<"sqrt (x+y)= "<<funcionRaizSumaDosNumeros(area,margen)<<endl;
    cout<<"sqrt ((area+margen)/anio)= "<<funcionRaizSumaDosNumeros(area,margen,anio)<<endl;
    cout<<"|x-y| = "<<funcionValorAbsoluto(x,y)<<endl;

    return 0;
}

double funcionValorAbsoluto(double x, double y){

    if((x-y)<0)
        return (x-y)*(-1);
    else
        return (x-y);
}
double funcionRaizSumaDosNumeros(double x, double y){
    if(x>0 && y>0)
        return sqrt(x+y);
    else
         return 0;
}
double funcionRaizSumaDosNumeros(double x, double y, double z){
    if(x>0 && y>0 && z>0)
        return sqrt((x+y)/z);
    else
        return 0;
}

double funcionPotenciaVariablesDosNumeros (double x, double y){

    return pow(x, y+7);
}
