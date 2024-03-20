#include <iostream>
using namespace std;

int main()
{
    double lado1;
    double lado2;
    double area;

    cout <<"Ingrese el primer lado del cuadrado: ";
    cin >> lado1;

    cout <<"Ingrese el segundo lado del cuadrado: ";
    cin >> lado2;

    area = lado1 * lado2;

    cout <<"El area del rectangulo es: " <<area <<endl;

    return 0;
}