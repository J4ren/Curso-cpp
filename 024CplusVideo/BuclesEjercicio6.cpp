/*Escriba un programa que calcule x^y,
donde tanto x como y son enteros
positivos, sin utilizar la función pow.

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int x, y;
    int auz = 1;

    cout<<"Ingrese el numero x: "; cin>>x;
    cout<<"Ingrese el numero y: "; cin>>y;

    for (int i = 0; i < y; i++)
    {
        auz= auz* x;
    }
    cout<<"Resultado: "<<auz<<endl;


    return 0;
}