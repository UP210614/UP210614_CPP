//Recursividad
#include <iostream>
#include <conio.h>
using namespace std;


int factorial(int n);


int main(){
	
	cout<<factorial(5);
	
	
	
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
