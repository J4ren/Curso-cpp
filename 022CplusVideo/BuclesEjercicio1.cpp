/*Realice un porgrama que solicite de la entrada estamdar un entero del 1 al 10
y muestre  en la salida estandar su tabla de multiplicar*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int num;
    cout<<"Ingrese el numero para su tabla de multplicar: "; cin>>num;
    for (int i = 0; i <= 10; i++)
    {
        cout<<i<<" x "<< num << " = "<< i*num <<endl;
    }
    

    return 0;
}