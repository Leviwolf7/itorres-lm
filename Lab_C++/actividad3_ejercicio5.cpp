#include <iostream>
using namespace std;

int main()
{
    double base;
    double altura;
    double area;

    cout <<"Ingrese la base del rectangulo: ";
    cin >> base;

    cout <<"Ingrese la altura del rectangulo: ";
    cin >> altura;

    area = altura * base;

    cout <<"El area del rectangulo es: " <<area <<endl;

    return 0;
}