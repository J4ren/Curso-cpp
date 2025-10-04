

/*Escriba un programa que  solicite una edad ( un entero) e indique emn la  salida estandar si la edad ingresada
esta en el rango [18-25]*/
#include <iostream>


using namespace std;

int main(){

    int edad;
    cout <<"Ingrese su edad: "; cin>>edad;

    if (edad >= 18 && edad<=25)
    {
        cout<<"Tu edad cumple con los requisitos puedes pasar: "<<endl;
    }else{
        cout<<"No puedes pasar: tu edad no es en el rango [18-25]"<<endl;
    }
    

    return 0;
}