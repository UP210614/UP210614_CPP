/*  Unidad 1. Tipos de datos
    Autor: Edgar Sandoval Rodríguez
    Fecha: 15/09/2022
    Descripción: Muestra los diferentes tipos de datos en c++ hola
*/

#include <iostream>

#include <stdio.h>
using namespace std;

int main(){
    
    int entero = 2147483647;
    float flotante = 3.1416e4;
    double grande = 2.565465654654;
    char caracter = '@';

    cout<<"Este programa muestra los tipos de datos: \n";
    cout<<"El numero entero es: "<<entero<<endl;
    cout<<"El tamaño del entero: "<<sizeof(entero)<<" bytes"<<endl;
    cout<<"El caracter char es: "<<caracter<<endl;
    cout<<"El tamaño del char es: "<<sizeof(caracter)<<endl;


    getchar();
    return 0;
}