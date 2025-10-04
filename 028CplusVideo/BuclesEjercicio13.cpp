/*Realiza la serie fibonacci -> 1 1 2 3 5 8 13 ...*/

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;


int main(){
    int z=1,x=0,y=1, n;
    
    for (int i = 0; i <= 5; i++)
    {
        z= x + y;
        cout<<z<<" ";
        x=y;
        y=z;
    
    }
    

    system("pause");
    return 0;
}