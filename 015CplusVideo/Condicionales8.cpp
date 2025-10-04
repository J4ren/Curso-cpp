/*Escriba un programa que lea de  entrada  un caracter e indique en la salida si el caracter es 
mayuscula minuscula  o no es una vocal*/


#include <iostream>

using namespace std;

int main(){

    char letra;

    cout<<"Ingrese la letra: "; cin >>letra;


    if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
        cout<<"La letra es minuscula y es una vocal"<<endl;
    }else if(letra=='A'|| letra=='E'|| letra=='I'|| letra=='O'|| letra=='U'){
        cout<<"La letra es mayuscula y es una vocal"<<endl;
    }else{
        cout<<"No es una vocal"<<endl;
    }
    
    return 0;
}