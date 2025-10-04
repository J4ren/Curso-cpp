//9. Escriba un programa que calcule el valor de: 1'2*3*...*n (factorial)
//51 = 5*4*3*2*1

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int facotrial = 1;
    int num;
    cout<<"Ingresa un numero para ver su factorial: "; cin>>num;
    cout<<"Factorial: ";
    for (int i = num; i >= 1; i--)
    {
        facotrial*=i;
        
        cout<<i<<" x ";
    }
    cout <<" = "<<facotrial<<endl;
    return 0;
}

