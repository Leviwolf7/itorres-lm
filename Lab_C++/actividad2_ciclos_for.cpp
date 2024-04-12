#include <iostream>
using namespace std;

int main() {
    double temperatura[12]; //Esto declara un array que puede guardar 12 elementos en la variable temperatura
    double sum = 0;

    for (int i = 0; i < 12; i++) {
        cout << "Entra la temperatura del mes " << (i + 1) << ": ";
        cin >> temperatura[i]; //Esto guarda la temperatura que se ingresa  y [i] es el indice del array que son 12 por el for
        sum += temperatura[i]; //Esto += asigna y añade (las suma) cada una de las temperaturas a la variable sum
    }

    double promedio = sum / 12; //Aquí profesora se sumo todas las temperaturas y se dividió entre 12 para sacar el promedio
    cout << "El promedio de las temperaturas es " << promedio << endl;

    return 0;
}