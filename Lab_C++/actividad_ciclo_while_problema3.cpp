#include <iostream>
using namespace std;

int main() {
    float horasTrabajadas, pagoPorHora, sueldoBruto, sueldoNeto, horasExtra, pagoExtra, descuento;
    float totalNomina = 0, totalHorasExtra = 0, totalPagoExtra = 0;

    // En este caso profesora lo que cambia es el ciclo for que lo cambie por un ciclo while
    int i = 0;
    while (i < 3) {
        cout << "Ingrese las horas trabajadas del empleado " << i + 1 << ": ";
        cin >> horasTrabajadas;

        cout << "Ingrese el pago por hora del empleado " << i + 1 << ": ";
        cin >> pagoPorHora;

        sueldoBruto = horasTrabajadas * pagoPorHora;
        descuento = sueldoBruto * 0.07;
        sueldoNeto = sueldoBruto - descuento;

        if (horasTrabajadas > 40) {
            horasExtra = horasTrabajadas - 40;
            pagoExtra = horasExtra * pagoPorHora * 2;
        } else {
            horasExtra = 0;
            pagoExtra = 0;
        }

        totalNomina += sueldoNeto + pagoExtra;
        totalHorasExtra += horasExtra;
        totalPagoExtra += pagoExtra;

        cout << "Sueldo bruto: " << sueldoBruto << ", sueldo neto: " << sueldoNeto;
        cout << ", horas extra: " << horasExtra << ", pago extra: " << pagoExtra << "\n";
        cout << "-------------------------------------------------------------------------------> " << i + 1 <<endl;

        i++;
    }

    cout << "Total pagado en nomina: " << totalNomina;
    cout << ", total de horas extra: " << totalHorasExtra;
    cout << ", total pagado en horas extra: " << totalPagoExtra << "\n";

    return 0;
}