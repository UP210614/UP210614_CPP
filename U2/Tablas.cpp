#include <iostream>

using namespace std;

int main(){

    int numero = 0, multiplicar = 0;

    cout<<"Introduzca su número a multiplicar: ";cin>>numero;
    cout<<endl<<"Hasta que numero quiere multiplicar: ";cin>>multiplicar;

    for(int i = 1; i <= multiplicar; i++){

        cout<<endl<<i<<". "<<numero<<" * "<<i<<" = "<<numero*i;

    }

    getchar();
    return 0; 
}
