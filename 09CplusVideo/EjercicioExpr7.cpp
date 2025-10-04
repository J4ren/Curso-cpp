/* .
Escriba un programa que lea de la
entrada estándar los dos catetos de u
triángulo rectángulo y escriba en la
salida estándar su hipotenusa.
*/


#include <iostream>
#include <math.h>
using namespace std;


int main(){
    float ad, op, h;
    cout<<"Ingrese el cateto adyacente: "; cin>>ad;
    cout<<"Ingrese el cateto opuesto: ", cin>>op;

    h= sqrt((ad*ad)+(op*op));
    cout.precision(2);  
    cout<<"Resultado de hipotenusa: "<<h;

    return 0;
}