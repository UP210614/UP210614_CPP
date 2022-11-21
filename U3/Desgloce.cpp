#include <iostream>
#include <conio.h>
using namespace std;

void desgloce(int dinero);

int main(){
	
	int dinero;
	
	cout<<"Ingresa tu dinero: ";cin>>dinero;
	
	desgloce(dinero);
	
	getch();
	return 0;
}


void desgloce(int dinero){
	int  mil = 0, quinientos = 0, doscientos = 0, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0,dos = 0, uno = 0;	
	mil = dinero /1000;
	dinero %= 1000; 
	quinientos = dinero /500;
	dinero %= 500; 
	doscientos = dinero /200;
	dinero %= 200; 
	cien = dinero/100;
	dinero %= 100;
	cincuenta = dinero/50;
	dinero %= 50;
	veinte = dinero/20;
	dinero %= 20;
	diez = dinero/10;
	dinero %= 10;
	cinco = dinero/5;
	dinero %= 5;
	dos = dinero/2;
	dinero %= 2;
	uno = dinero/1;
	
	
	cout<<endl;
	cout<<"Mil: "<<mil<<endl;
	cout<<"quinientos: "<<quinientos<<endl;
	cout<<"Doscientos: "<<doscientos<<endl;
	cout<<"Cien: "<<cien<<endl;
	cout<<"Cincuenta: "<<cincuenta<<endl;
	cout<<"Veinte: "<<veinte<<endl;
	cout<<"Diez: "<<diez<<endl;
	cout<<"Cinco: "<<cinco<<endl;
	cout<<"Dos: "<<dos<<endl;
	cout<<"Uno: "<<uno<<endl;
}
