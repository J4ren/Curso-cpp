/*Escriba un programa que calcule el
valor de: 1!+2!+3!+..+n!
(suma de factoriales).*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    long long suma = 0;
    int n;
    cout<<"Ingresa un numero para ver su factorial: "; cin>>n;
    cout<<"Factorial: ";
   for (int i = 1; i <= n; i++) {
        long long factorial = 1;

        // Calcula el factorial de i
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }

        // Suma el factorial al total
        suma += factorial;
    }
    cout<<"Suma total de las factoriales: "<<suma<<endl;
    return 0;
}