//escriba un programa que calcule el valor de: 1+2+3+---+n

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int valores, suma= 0;
    cout<<"Cuantos valores va tener la suma: "; cin>>valores;
 
    for (int i = 0; i < valores; i++)
    {
        suma+= i;
    }
    
    cout <<"La suma de los numeros son : "<<suma<<endl;
    
    system("pause");
    return 0;
}