#include <iostream>

using namespace std;

int main(){

    int a,b,c;
    cout<<"Ingrse tres numeros: "; cin>>a>>b>>c;

    if (a == b && a==c)
    {
        cout<<"Los numeros son iguales";
    
    }
    else if (a>b && a> c)
    {
        cout<<"El numero mayor es: "<<a<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"El numero mayor es: "<<b<<endl;
    }
    else{
        cout<<"El numero mayor es: "<<c<<endl;
    }

    



    return 0;
}