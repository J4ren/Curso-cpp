/*Hacer un programra que simule un cajero automatcio con saldo inicial de 1000 dolares*/

#include <iostream>

using namespace std;

int main(){
    int saldo = 1000;
    int opcion=100;
    int monto;


    while (opcion !=4){
        cout<<"Bienvenido a tu cajero automatico, Gracias por la preferencia"<<endl;
        cout<<"1.Consultar saldo"<<endl;
        cout<<"2.Ingresar nuevo monto a la cuenta"<<endl;
        cout<<"3.Retirar saldo"<<endl;
        cout<<"4.Salir"<<endl;
        cin>>opcion;

        if(opcion==1){
            cout<<"Tu saldo en tu cuenta es: "<<saldo<<endl; cout<<"Deseas salir?\n4.Si\n5.No\n"; cin>> opcion;
        }else if (opcion==2){
            cout <<"Ingrese la cantidad: "; cin>>monto; cout<<"**Monto ingresado**\n"; saldo+=monto; cout<<"Tu saldo: "<<saldo<<endl; cout<<"Deseas salir?\n.4SI\n5.No\n"; cin>> opcion;
        }else if (opcion==3){
            cout<<"Ingrese la cantidad a retirar: "; cin>>monto; 
            while(monto>saldo)
            {
                cout<<"Error, Ingresa un monto dentro de el saldo que poseas: saldo: "<<saldo<<endl;
                cin>>monto;
            }
            cout<<"Retiraste : -"<<monto<<endl;saldo-=monto; cout<<"Deseas salir?\n4.Si\n5.No\n"; cin>> opcion; 
        }
    }
    
    
    cout<<"***Vuelva pronto***"<<endl;
    



    return 0;
}