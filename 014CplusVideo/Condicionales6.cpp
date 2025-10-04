/*Comprobar si un numero ingresado   es positivo o negativo*/


#include <iostream>

using namespace std;


int main(){

    int n;
    cout<<"Ingrese el numero: "; cin>>n;

    if (n>=0)
    {
        cout<<"El numero es positivo: "<<endl;
    }
    else{
        cout<<"El numero es negativo: "<<endl;
    }
    

    return 0;
}