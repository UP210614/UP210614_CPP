#include <iostream>
#include <math.h>
using namespace std;


double fnEcuacion1(double x){
    double y;
    y = pow(x,2)-8*x+15;
    return y;
}


int main(){

    double x1 = 4;

    double r = fnEcuacion1(0);
    cout<<endl<<r;



    getchar();
    return 0;
}