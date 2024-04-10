#include <iostream>
using namespace std;

int main()
{
    int suma = 0; // Variable para acumular la suma

    // ciclo for para hacer la suma del 1 al 10
    for (int i = 1; i <= 10; i++)
    {
        suma = suma + i;
    }
    // Se le impreme al usuario el resultado
    cout << "La suma de los numeros del 1 al 10 es: " << suma
    << endl;
}