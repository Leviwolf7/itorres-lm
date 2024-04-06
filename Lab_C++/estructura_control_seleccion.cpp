#include <iostream>
using namespace std;

int main()
{
    //Aqui cree las variables para el costo total y la tarjeta
    int costoCompra;
    int tarjeta;

    //Pedir al cliente que ingrese el costo
    cout << "Ingrese el costo total de la compra: ";
    cin >> costoCompra;

    //Pedir al cliente que ingrese si tiene o no tarjeta VIP
    cout << "Ingrese el numero 1 si tiene tarjeta VIP o ingrese el numero 2 si no tiene tarjeta VIP: ";
    cin >> tarjeta;

    //Comprobar si el cliente aplica o no aplica para el descuento
    if(costoCompra >= 150 || tarjeta == 1) {
        cout << "Usted aplica para un descuento." <<endl;
    } else {
        cout << "Usted no aplica para el descuento." <<endl;
    }

    return 0;
}