/*Escribe un programa que lea de la entrada estándar el precio de un
producto y muestre en la salida estándar el precio del producto al
aplicarle el IVA.*/
#include <iostream>

using namespace std;

int main(){

    float precioProducto;

    cout<<"Ingrese el precio del producto: "<<endl;
    cin>>precioProducto;

    cout<<"El total del producto: "<<precioProducto<<endl;
    cout<<"El total aplicacndo el IVA es: "<<(precioProducto +(precioProducto*0.18))<<endl;


    return 0;
}