/*Realice un programa que calcule y muestre en la salida estandar la suma de los cudrados de los 10 primeros enteros mayores
a cero*/

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
    int num; 
    int contador =0;
    int sumaCuadrados = 0;
    do
    {
        cout <<"Ingrese numeros mayores a cero: "; cin>>num;
        if(num>0){
            sumaCuadrados = sumaCuadrados + pow(num,2);
        }
    } while (num!=0);
    cout <<"La suma de los cuadrados de los numeros ingresados son: "<< sumaCuadrados<<endl;    
    return 0;
}