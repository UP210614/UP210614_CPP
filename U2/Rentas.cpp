#include <iostream>
using namespace std;

int main(){
    
    double renta;

    cout<<"Ingrese su renta anual: ";cin>>renta;

    if(renta < 10000){
        cout<<"Su impuesto es del: 5%";
    }
    else if(renta <20000){
        cout<<"Su impuesto es del: 15%";
    }
    else if(renta <35000){
        cout<<"Su impuesto es del: 20%";
    }
    else if(renta <=60000){
        cout<<"Su impuesto es del: 30%";
    }
    else if(renta >60000){
        cout<<"Su impuesto es del: 45%";
    }


    return 0;
    getchar();
}
