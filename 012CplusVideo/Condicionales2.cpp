/*   switch (expression){
        case literal1:
            conjunto de instrucciones1;
            break;
        case literal2:
            conjunto de instrccuiones2;

    
        default:
            conjunto de instrcucciones por defecto;  
            break;
        }
*/
#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int numero;
    cout<<"Ingrese un numero entre 1-5\n"; cin>>numero;

    switch (numero)
    {
        case 1:
            cout<<"Es el numero 1";
            break;
        case 2:
            cout<<"Es el numero 2";
            break;
        case 3:
            cout<<"Es el numero 3";
            break;
        case 4:
            cout<<"Es el numero 4";
            break;
        case 5:
            cout<<"Es el numero 5";
            break;
    default:
        cout<<"No esta en el rangp de 1-5";
        break;
    }
    return 0;
}