#include <iostream>
using namespace std;

//Definición de la función ObtenerPi que no recibe parámetros y retorna un valor double
double ObtenerPi()
{
    return 3.14;
}

int main()
{
    double radio = 5;
    //Multiplica el radio por si mismo para obtener el cuadrado del radio
    double area = ObtenerPi() * (radio * radio);

    cout << "El area es: " << area << endl;
    return 0;
}