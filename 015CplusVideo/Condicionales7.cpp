/*Escriba un programa que lea de la entrda estandar un caracter e indique en la salida  si el carcater
es una vocal minuscula o no*/
#include <iostream>
#include <cctype> //libreria para llamar a isupper y islower, sirve para hacer maysucula o minuscula los string
using namespace std;


int main(){

    char vocal;
    cout<<"Ingrese solo una vocal: "; cin>>vocal;

    switch(vocal)
    {
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"La vocal es minuscula"; break;

        default:
            cout<<"La vocal no es minuscula "; break;
        
    }
    return 0;
}