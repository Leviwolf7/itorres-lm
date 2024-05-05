#include <iostream>
#include <string>
using namespace std;

int main() {
    //Definir el arreglo con 5 nombres de ciudades o paises
    string ciudades[5] = {"Paris", "Tokio", "Nueva York", "Londres", "Sydney"};

    //Imprimir los nombres de las ciudades o paises
    cout << "Lista de ciudades o paises: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Ciudad/Pais " << i + 1 << " : " << ciudades[i] << endl; 
    }

    return 0;
}