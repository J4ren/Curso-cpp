/*Escriba un porgrama que calcule el valor  de: 1+3+5...+2n-1*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int impar = 0;
    int valores;
    cout<<"Ingrese el limite de valores: ";cin>>valores;

    for (int i = 1; i < valores; i++)
    {
        if((i%2)==1){
            impar+=i;
        }
    }
    cout<<"La suma de los numeros es: "<<impar<<endl;
    system("pause");
    return 0;
}