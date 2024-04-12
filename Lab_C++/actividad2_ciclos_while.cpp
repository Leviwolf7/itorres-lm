#include <iostream>
using namespace std;

int main() {
    double temperatura[12]; //Variables temperaturas que se guardan en un array de 12 elementos
    double sum; // Aquí descubrí que solo podía declararla y asignarle el valor después en ves de crearla como un acumulador

    int i = 0; //Acumulador
    while (i < 12) { //Aquí se utilizo el while para que se repita 12 veces
        cout << "Entre la temperatura del mes " << (i + 1) << ": ";
        cin >> temperatura[i];
        sum += temperatura[i]; //Aquí se suman las temperaturas y se asignan a la variable sum
        i++;
    }

    double promedio = sum / 12;
    cout << "El promedio de las temperaturas es " << promedio << endl;

    return 0;
}