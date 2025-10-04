/*Realice un programa que lea de la entrada
estándar números hasta que se
introduzca un cero. En ese momento el
programa debe terminar y mostrar en la
salida estándar el número de valores mayores que ceros leidos*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num;
    int contador =0;
    do{
        cout<<"Ingresa un numero (0 para terminar)"; cin>>num;
          
        if(num>0){
            contador++;
            
        }
       
        
    }while(num!=0);
    
    cout<<"Numeros mayores a cero ingresados: "<<contador<<endl;

    return 0;
}