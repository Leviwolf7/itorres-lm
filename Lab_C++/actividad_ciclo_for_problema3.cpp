#include <iostream>
using namespace std;

int main() {
    // Aquí nombre las variables y los acumuladores
    float horasTrabajadas, pagoPorHora, sueldoBruto, sueldoNeto, horasExtra, pagoExtra, descuento;
    float totalNomina = 0, totalHorasExtra = 0, totalPagoExtra = 0;

    // Se crea un ciclo for para pedir los datos de los 3 empleados
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese las horas trabajadas del empleado " << i + 1 << ": "; //Aquí se pide las horas trabajadas 3 veces a cada uno de los empleados
        cin >> horasTrabajadas; // Se guarda en la variable horasTrabajadas

        cout << "Ingrese el pago por hora del empleado " << i + 1 << ": "; //Aquí se le pide el pago por hora 3 veces  a cada uno de los empleados
        cin >> pagoPorHora; // Se guarda en la variable pagoPorHora

        sueldoBruto = horasTrabajadas * pagoPorHora; // Se calcula el sueldo bruto que es las horas trabajadas por el pago por hora
        descuento = sueldoBruto * 0.07; // El descuento del 7% para sacar el sueldo neto
        sueldoNeto = sueldoBruto - descuento; // Se le resta el descuento al sueldo bruto para sacar el sueldo neto

        // Si trabajo mas de 40 se le paga el overtime o extra
        if (horasTrabajadas > 40) {
            horasExtra = horasTrabajadas - 40; // Se le resta 40 para multiplicar lo que sobro que es las horas extra
            pagoExtra = horasExtra * pagoPorHora * 2; // Se multiplica las horas extra por el pago por hora y por 2 (el doble)
        } else { // Si no hizo mas de 40 horas no se le añade nada 
            horasExtra = 0;
            pagoExtra = 0;
        }

        totalNomina += sueldoNeto + pagoExtra; // Se le asigna a totalNomina el sueldo neto mas el pago extra y se suman a totalNomina
        totalHorasExtra += horasExtra; //Se le asigna a totalHorasExtra las horas extra y la suma de todas
        totalPagoExtra += pagoExtra; // Se le asigna a totalPagoExtra el pago extra y la suma de todas

        cout << "Sueldo bruto: " << sueldoBruto << ", sueldo neto: " << sueldoNeto;
        cout << ", horas extra: " << horasExtra << ", pago extra: " << pagoExtra << "\n"; // Esta \n es para que aquí haga el salto de linea
        cout << "-------------------------------------------------------------------------------> " << i + 1 <<endl; // Esto profesora es para q se vea mas organizado
    }

    cout << "Total pagado en nomina: " << totalNomina; // Imprime el total de la nomina
    cout << ", total de horas extra: " << totalHorasExtra; // Imprime el total de horas extra
    cout << ", total pagado en horas extra: " << totalPagoExtra << "\n"; // \n salto de linea

    return 0;
}