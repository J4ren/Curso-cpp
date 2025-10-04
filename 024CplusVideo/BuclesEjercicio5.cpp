/*/*5. Escriba un programa que lea valores enteros hasta que se introduzca un
valor en el rango [20-30] o se introduzca el valor 0. El programa debe
entregar la suma de los valores mayores a 0 introducidos.*/

#include <iostream>
#include <stdlib.h>

using namespace std;


int  main(){
    int num;
    int sumanValores=0;
    
    
    do
    {
        cout<<"Ingrese numeros ([20-30] para parar o ingresar el cero 0)"; cin>>num;
        if(num>0){
            sumanValores+=num;
        }
        
  
    } while ((num<20 || num>30)&& num!=0);
        
        


    cout<<"La suma de los valores: "<<sumanValores<<endl;
    

    return 0;
}