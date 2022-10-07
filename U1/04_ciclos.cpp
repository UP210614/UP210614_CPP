#include <iostream>
using namespace std;

int main()
{

    int n = 10, s = 0, p = 0, imp = 0, pc = 0, impc = 0;

    for (int i = 1; i <= n; i++)
    {
        s += i;
        if (i % 2 == 0)
        {
            p += i;
            pc += 1;
        }
        else
        {
            imp += i;
            impc += 1;
        }
    }

    cout << endl
         << "La suma es: " << s;
    cout << endl
         << "La suma de los impares es: " << imp;
    cout << endl
         << "La suma de los pares es: " << p;
    cout << endl
         << "La suma de pares e impares es: " << imp + p;
    cout << endl
         << "La cantidad de numeros impares es: " << impc;
    cout << endl
         << "La cantidad de numeros pares es: " << pc;
    getchar();
    return 0;
}
