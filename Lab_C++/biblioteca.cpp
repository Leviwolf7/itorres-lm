#include <iostream>
using namespace std;

int main() 
{
    string estadoTarjeta;
    // Solicitar al usuario el estado de la tarjeta de la biblioteca
    cout << "La tarjeta de la biblioteca esta activa (Si/No): ";
    cin >> estadoTarjeta;

    // Verificar si la tarjeta está activa
    if (estadoTarjeta == "Si" || estadoTarjeta == "si" || estadoTarjeta == "SI") {
        // Si la tarjeta está activa, el usuario puede realizar préstamos
        cout << "Puedes realizar prestamos." << endl;
    } else {
        // Si la tarjeta no está activa, no se permiten préstamos
        cout << "No se permiten prestamos." << endl;
    }

    return 0;
}
