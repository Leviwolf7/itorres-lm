# include <iostream>
using namespace std;

int main()
{
    double celsius;
    double fahrenheit;

    cout <<"Ingrese la temperatura en graddos Celsius: ";
    cin >> celsius;

    fahrenheit = celsius * 9/5 + 32;

    cout <<"La temperatura ingresada en grados Celsius es equivalente a " << fahrenheit << " grados fahrenheit."<<endl;

    return 0;
}