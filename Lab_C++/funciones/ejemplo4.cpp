#include <iostream>
#include <cmath> // Libreria que permite utilizar varias funciones matematicas
using namespace std;

const double PI = 3.14; //Definir variables global y constantes

double calcularAreaCirculo(double radio); //Definir funcion

int main() {
    double radio;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    if (radio < 0) {
        cout << "El radio ingresado no es valido. Por favor, introduce un valor de radio no negativo." <<endl;        
    } else {
        double area = calcularAreaCirculo(radio); //Llamada a la funcion

        cout << "El area del circulo con radio " << radio << " es: " << area << endl;
    }

    return 0;
}

#include <cmath> // Include the <cmath> header to define the pow function

double calcularAreaCirculo(double radio) {
    return PI * pow(radio, 2); //Calcular el area del circulo (pow funcion para elevar la potencia de un numero)
}