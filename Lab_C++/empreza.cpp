#include <iostream>
using namespace std;

int main() 
{
    int yearsAntiguedad; //Aqui nombre la variable para el tiempo que tiene el empleado

    // Pedir al usuario cuantos años tiene enl la empresa
    cout << "Ingrese el tiempo que tiene en la empresa: ";
    cin >> yearsAntiguedad;

    // Verificar si el empleado recibe el bono
    if (yearsAntiguedad >= 5) {
        // Si tiene 5 años o más recibe el bono de $1000
        cout << "El empleado aplica para el bono." << endl;
    } else {
        // Si tiene menos de 5 años, no recibe bono
        cout << "El empleado no recibe bono." << endl;
    }

    return 0;
}
