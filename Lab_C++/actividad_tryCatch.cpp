#include <iostream>
using namespace std;

int main()
{
    float numero; //Variable tipo float
    int num_entero; //Variable de tipo entero

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    //Extraccion de la parte entera del numero
    num_entero = numero;

    try
    {
        if (numero != num_entero) //Condicion si el numero no es igual a un numero entero
        {
            throw "Usted no ingreso un numero entero.";
        }

        cout << "Su numero entero fue: " << numero << endl;
    }
    catch(const char* mensaje)
    {
        cout << "Excepcion capturada: " << mensaje << endl;
    }
    
    return 0;
}