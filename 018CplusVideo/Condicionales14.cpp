/*Hacer un porgrama que considere las siguientes opciones

1-Cubo de un numero
2-Numero par o impar
3-Salir

*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int numero;
    int opcion=100;
    int cubo, paroimpar;
    

   while (opcion!=3)
   {
        cout<<"1-Cubo de un numero\n2-Numero par o impar\n3-Salir\n"; cin>>opcion;
        if(opcion==1){

            cout<<"Ingresen el numero para el cubo: "; cin>>numero;
            cubo= pow(numero,3);
            cout<<"El cubo del numero es: "<<cubo<<endl;
            cout<<"Deseas salir? \n3.Si\n4.No"; cin>>opcion;

        }else if (opcion==2){
            cout<<"Inhresa el numero: "; cin>>numero;
            if(numero%2==0)
            {
                cout<<"***Es par***";
            }else{
               cout<<"***Es impar***";
            }
            cout<<"Deseas salir? \n3.Si\n4.No"; cin>>opcion;
                
        }
   }
   cout<<"Saliste del sistema";
   
    
    return 0;
}