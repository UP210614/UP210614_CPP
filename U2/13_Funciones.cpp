#include <iostream>
using namespace std;

void doble(float x);

int main(){

    int n;
    cout<<"Introduzca un numero: ";cin>>n;
    doble(n);

    getchar();
    return 0;
}


void doble(float x){
    float r = x *2;
    cout<<endl<<"Su resultado es: "<<r;
}