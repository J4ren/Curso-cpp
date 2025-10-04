/*Realice un programa  que lea un valor entero y determine si se trata de un numero
par o impar*/

#include <iostream>

using namespace std;

int main(){

    int numeroPar;


    cout<<"Ingrese el numero: "; cin>>numeroPar;

    if((numeroPar%2)==0)
    {

        cout<<"El numero es par: "<<numeroPar<<endl;
    }else{
        cout<<"El numero no es par: "<<numeroPar<<endl;
    }
    return 0;

}