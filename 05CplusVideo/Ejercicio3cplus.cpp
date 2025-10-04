/*3. Realice un programa que lea de la entrada estándar los siguientes datos de una persona.
Edad: dato de tipo entero.
Sexo: dato de tipo carácter.
Altura en metros: dato de tipo real.
Tras Leer los datos, el programa debe mostrarlos en la salida estándar.*/
#include <iostream>

using namespace std;

int main(){

    int edad;
    char sexo[10];
    float altura;

    cout<<"Ingrese su edad: \n"; cin>>edad;
    cout<<"Ingrese su sexo: \n"; cin>>sexo;
    cout<<"Ingrese su altura \n"; cin>>altura;

    cout<<"Tus Datos son: \nEdad: "<<edad<<"\nSexo: "<<sexo <<"\nAltura: "<<altura<<endl;

    return 0;
}