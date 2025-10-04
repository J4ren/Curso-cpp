/*Escribe un programa que lea de la entrada
estándar tres números. Después
debe leer un cuarto número e indicar si el
número coincide con alguno de los
introducidos con anterioridad*/

#include <iostream>

using namespace std;

int main(){

    int a,b,c;

    cout<<"Ingrese tres numeros: a b y c \n"; cin>>a>>b>>c;
    if (a==b && a!=c){
        cout<<"El valor de a: "<< a <<" coincide con el valor de b: "<< b <<endl;
    }else if(b==c && b!=a){

        cout<<"El valor de b: "<< b <<" coincide con el valor de c: "<< c <<endl;
    }else if(c==a && c!=b){

        cout<<"El valor de a: "<< a <<" coincide con el valor de c: "<< c <<endl;
    }else if(a==b && a==c){
        cout<<"Los valores son iguales!"<<endl;
    }else{
        cout<<"Ningun valo se parecen"<<endl;
    }


    return 0;
}