/*1. Escribe un programa que lea de la entrada estandar dos numeros y muestre
en la salida estándar su suma, resta, multiplicación y división.*/
#include <iostream>

using namespace std;

int main(){

    int numero1, numero2;

    cout<<"Ingrese el primer numero: \n";
    cin>>numero1;
    cout<<"Ingrese el segundo numero: \n";
    cin>>numero2;

    cout<<"Resultado: \n";
    cout<<"Suma: "<<numero1+numero2 << endl;
    cout<<"Resta: "<<numero1-numero2<<endl;
    cout<<"Producto: "<<numero1*numero2<<endl; 
    cout<<"Division: "<<numero1/numero2<<endl;

    return 0;
}