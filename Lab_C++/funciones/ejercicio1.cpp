#include <iostream>
using namespace std;

// Función para retornar el porcentaje de ventas
double porcentajeVentas() {
    return .15;
}

int main() {
    // Cree las variables con las que voy a trabajar
    double venta;
    double sueldoNeto;
    double bono = 125;

    //Imprime el mensaje para que el usuario ingrese el total de ventas
    cout << "Ingrese el total de la venta: ";
    cin >> venta;

    sueldoNeto = venta * porcentajeVentas(); //Aquí se calcula el sueldo con la venta por la función

    // Cree un if para calcular si recibirá un bono o no
    if (venta >= 1500) {
        cout << "Usted recibe un bono de $125 dolares, continue con un buen trabajo." << endl;
        sueldoNeto += bono;
    } else {
        cout << "No cualifica para el bono de $125 dolares, buen trabajo." << endl;
    }

    cout << "Su sueldo neto es de: $" << sueldoNeto << endl;

    return 0;
}