#include <iostream>
using namespace std;

int main(){

    char letra = 90;

    cout<<endl<<"Abecedario al revez.";
    cout<<endl;
    for(int i = 0; i < 26; i++){

        
        cout<<letra<<"\t";
        letra -=  1;
        cout<<endl;
    }

    cout<<endl<<"Abecedario en minusculas.";
    cout<<endl;
    letra = 'a';
    for(int i = 0; i < 26; i++){

        
        cout<<letra<<"\t";
        letra +=  1;
        cout<<endl;
    }

    cout<<endl<<"Abecedario en mayusculas.";
    cout<<endl;
    letra = 'A';
    for(int i = 0; i < 26; i++){

        
        cout<<letra<<"\t";
        letra +=  1;
        cout<<endl;
    }

    cout<<endl<<"10 descendente.";
    cout<<endl;

    for(int i = 10; i >0; i--){
        cout<<i<<endl;
    }
    getchar();
    return 0;
}