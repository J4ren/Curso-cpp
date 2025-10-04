/* if(condicion){
        intruccion1;

    }else{

        instruccion2;
    }

*/

#include   <iostream>
#include    <math.h>   

using namespace std;

int main(){
    int numero, dato=5;
    cout<<"Ingrese un numero: "; cin>>numero;
    if (numero==dato)
    {
        cout<<"El numero es: "<<numero;
    }else{
        cout<<"No es el numero";
    }
    

    return 0;
}