/*Escriba un programa que calcule las
soluciones de una ecuación de
segundo grado de la forma ax^2 + bx + c = 0,
teniendo en cuenta que:*/
#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double a,b,c,x;
    double discriminante;

    cout<<"Ingrse el valor de a: "; cin>>a;
    cout<<"Ingrse el valor de b: "; cin>>b;
    cout<<"Ingrse el valor de c: "; cin>>c;
    discriminante=pow(b, 2) - 4 * a * c;
    x=(-b+sqrt(discriminante))/(2*a);
    
    cout<<"Resultado: "<<x<<endl;

    return 0;
}