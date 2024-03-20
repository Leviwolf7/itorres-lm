#include <iostream>
using namespace std;

int main()
{
    double base;
    double altura;
    double area;
    double perimetro;

    cout <<"Ingrese la base del rectangulo: ";
    cin >> base;

    cout <<"Ingrese la altura del rectangulo: ";
    cin >> altura;
    
    area = base * altura;

    cout <<"El area del rectangulo es: " <<area <<endl;

    perimetro = altura + altura + base + base;

    cout <<"El perimetro del rectangulo es: " <<perimetro <<endl;

    return 0;
}