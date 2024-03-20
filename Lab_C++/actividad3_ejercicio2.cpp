# include <iostream>
using namespace std;

int main()
{
    double velocidad;
    double tiempo;
    double distancia;

    cout <<"Ingrese la velocidad en que estaba recorriendo en el viaje en millas por hora: ";
    cin >> velocidad;

    cout <<"Ingrese las horas en que recorrio el viaje: ";
    cin >> tiempo;

    distancia = velocidad * tiempo;

    cout <<"El tiempo que le tomo en realizar el viaje en minutos es: " <<distancia <<endl;

    return 0;
}