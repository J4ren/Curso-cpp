/*Hacer un programa  que calcule  el resultado de la siguiente expresion: 

1-2+3-4+5-6...n

*/
#include <iostream>

using namespace std;

int main(){
    int n; 
    int resultado=0;
    
    cout<<"Ingrese el numero: "; cin>>n;
    for (int i = 1; i <= n; i++)
    {

        if ((i%2)==1){
            resultado = resultado +i;
        }
        if((i%2)==0){
            resultado = resultado -i;
        }

    }
    cout<<"Resultado: "<<resultado<<endl;
    return 0;
}