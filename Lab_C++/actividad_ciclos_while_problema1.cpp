#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Jennifer Gonzales"; //Aquí profesora cree la variable con el nombre de Jennifer Gonzales

    //Utilize el while para que repita el nombre 10 veces
    int i = 0;
    while (i < 10) {
        cout << "Hola " << name << endl; // Aquí imprime hola junto a la variable name = Jennifer Gonzales
        i++;
    }

    return 0;
}