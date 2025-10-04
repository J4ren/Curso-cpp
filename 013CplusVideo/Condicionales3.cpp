/*Escribe un programa que lea los dos numeros y determine cual es el mayor de ellos*/
#include <iostream>

using namespace std;

int main(){
    int a,b;

    cout<<"Ingrese el primer numero: "; cin >>a;
    cout<<"Ingrese el segundo numero: ";cin>>b;

    if(a>b){
        cout<<a<<" es mayor que "<<b<<"."<<endl;
    }else{
        cout<<b<<" es mayor que "<<a<<"."<<endl;
    }

    return 0;
}