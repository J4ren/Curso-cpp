/*Escriba un programa que tome cada 4 horas
la temperatura exterior,
leyéndola durante un período de 24 horas. Es
decir, debe leer 6 temperaturas.
Calcule la temperatura media del día, la temperatura mas alta y la mas baja*/

#include <iostream>
#include <stdlib.h> //Para el system("pause")

using namespace std;

int main(){

    int temperatura = 0;
    int alto=0;
    int menor =100;
    int suma=0;
    for (int i = 0; i < 24; i+=4) //Forma
    {
        cout<<"Ingresa la tempertura a las  "<< i <<" horas."; cin>>temperatura;

        if (temperatura> alto)
        {
            alto = temperatura;   
        }
        if (temperatura<menor){
            menor=temperatura;
        }
        suma+=temperatura;
    
    }
    suma = suma/6;
    cout<<"La temperatura mas alta fue: "<<alto<<endl;
    cout<<"La temperatura media del dia fue: "<<suma<<endl;
    cout<<"La temperatura mas baja fue: "<<menor<<endl;
    
    return 0;
}