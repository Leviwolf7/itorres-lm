# include <iostream>
using namespace std;

int main()
{
    double promedio;
    double examen1, examen2, examen3, examen4;

    cout <<"Ingrese la nota del examen 1: ";
    cin >> examen1;

    cout <<"Ingrese la nota del examen 2: ";
    cin >> examen2;

    cout <<"Ingrese la nota del examen 3: ";
    cin >> examen3;

    cout <<"Ingrese la nota del examen 4: ";
    cin >> examen4;

    promedio = (examen1 + examen2 + examen3 + examen4)/4;

    cout <<"El promedio que usted obtuvo es: " <<promedio <<endl;

    return 0;
}