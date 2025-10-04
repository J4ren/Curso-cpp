/*"Escriba un programa que  calcule el valor de; 2^1+2^2+2^3+...2^n
"*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    int suma= 0;

    cout <<"Ingrese el numero: "; cin>>n;

    for (int i = 1; i <= n; i++)
    {
        suma = suma + pow(2,i);
        
    }
    cout<<"La suma es:"<<suma<<endl;

    return 0;
}