#include <iostream>
using namespace std;

// Función que retorna el porcentaje de ventas
double porcentajeVentas() {
    return .15;
}

double sueldo; //Variable global

int main() {
    double venta; //Variable local

    // Imprime el mensaje y guarda el valor en la variable venta
    cout << "Ingrese el total de la venta: ";
    cin >> venta;

    // Calcula el sueldo multiplicando la venta por el porcentaje de ventas
    sueldo = venta * porcentajeVentas();

    // Imprime el sueldo neto
    cout << "Su sueldo neto es de: $" << sueldo << endl;

    return 0;
}