/*7. La calificación final de un estudiante es la media ponderada de tres notas:
La nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un
60% y la nota de participación que cuenta el 10% restante. Escriba un programa
que lea de la entrada estándar las tres notas de un alumno y escriba en La
salida estándar su nota final. */

#include <iostream>

using namespace std;

int main(){
    char nombre[10];
    float teorica, participacion, practicas, promedio;
    cout<<"Nombre del alumno"; cin>>nombre;
    cout<<"Ingrese la nota de practica calificadas: "; cin>>practicas;
    cout<<"Ingrese la nota examenes parciales: "; cin>>teorica;
    cout<<"Ingrese la nota de perticipacion: "; cin>>participacion;

    promedio= (practicas*0.30) +(teorica*0.60) + (participacion*0.10);
    cout<<"Nombre del alumno: "<<nombre<<endl;
    cout<<"Nota final: "<<promedio<<endl;


    return 0;
}

