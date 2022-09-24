#include <iostream>
using namespace std;

int main()
{

    int edad;

    cout << endl
         << "Ingrese una edad: ";
    cin >> edad;

    if (edad > 0 && edad <= 150)
    {

        if (edad <= 30)
        {
            cout << endl
                 << "Primera edad.";
        }
        else
        {
            if (edad > 30 && edad < 61)
            {
                cout << endl
                     << "Segunda edad.";
            }
            else
            {
                if (edad > 60 && edad < 91)
                {
                    cout << endl
                         << "Tercera edad.";
                }
                else
                {
                    if (edad > 90 && edad <= 150)
                    {
                        cout << endl
                             << "Ya robas oxigeno.";
                    }
                }
            }
        }
    }
    else
    {
        cout << endl
             << "Esa edad no existe.";
    }

    getchar();
    return 0;
}