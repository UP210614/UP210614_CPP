//Recursividad
#include <iostream>
#include <conio.h>
using namespace std;


int factorial(int n);


int main(){
	int n;
	cout<<"Ingrese un numero: ";cin>>n;
	
	cout<<"El factorial de "<<n<<" es:"<<factorial(n);
	
	
	
	getch();
	return 0;
}

int factorial(int n){
	
	if(n == 0){
		n = 1;
	}else{
		
		n = n * factorial(n-1);
	}
	
	return n;
}
