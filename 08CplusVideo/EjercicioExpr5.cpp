#include <iostream>

using namespace std;

int main(){

    float alum1, alum2, alum3, alum4;
    float promedio;

    cout<<"Ingrese el la nota final del primer alumno "; cin>>alum1;
    cout<<"Ingrese el la nota final del segundo alumno "; cin>>alum2;
    cout<<"Ingrese el la nota final del tercer alumno "; cin>>alum3;
    cout<<"Ingrese el la nota final del cuarto alumno "; cin>>alum4;

    promedio =(alum1 + alum2 + alum3+ alum4)/4;
    cout<<"Promedio del los 4 alumnos con las notas finales: "<<promedio<<endl;

    return 0;
}