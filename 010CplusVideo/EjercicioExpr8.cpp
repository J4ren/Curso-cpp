#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float x, y, funcion;

    cout<<"Ingrese el valor de x: "; cin >>x;
    cout <<"Ingrese el valor de y: "; cin >> y;

    funcion = sqrt(x)/(pow(y,2)-1); //sqrt para sacar razi cuadrada y pow para potencias, pow(numero, potencia)
    cout<<"f("<<x<<","<<y<<"): raiz(x/y^2-1)\n";
    cout<<"f("<<x<<","<<y<<"): "<<funcion<<endl;
    return 0;
}