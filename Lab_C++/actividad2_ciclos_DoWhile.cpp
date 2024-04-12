#include <iostream>
using namespace std;

int main() {
    double temperatura[12]; //Variables temperaturas que se guardan en un array de 12 elementos
    double sum = 0; //Aquí no estoy muy seguro de la diferencia de crearla como un acumulador o solo declararla en las dos me funciona

    int i = 0; //Acumulador
    do { //En el While hace que almenos se ejecute una vez y si es verdadera se repite
        cout << "Entre la temperatura del mes " << (i + 1) << ": ";
        cin >> temperatura[i]; //Esto guarda la temperatura que se ingresa  y [i] es el indice del array que son 12 por el for
        sum += temperatura[i];
        i++;
    } while (i < 12);

    double promedio = sum / 12;
    cout << "El promedio de las temperaturas es " << promedio << endl;

    return 0;
}