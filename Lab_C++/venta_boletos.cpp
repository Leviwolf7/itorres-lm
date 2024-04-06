#include <iostream>
using namespace std;

int main()
{
    //Aqui se menciona las variables que vamos a utilizar en el programa
   int membresia;
   int entradas;

    //Aqui Se le pregunta al usuario si es miembro o no para guardar el valor en la variable
   cout << "Es usted miembro del teatro ingrese 1 si es miembro y 2 si no es miembro: ";
   cin >> membresia;

    //Aqui se le pregunta cuantas entradas compro para guardar el valor en la variable entradas
   cout << "Ingrese la cantidad de entradas que usted compro: ";
   cin >> entradas;

    //Aqui se determina si el usuario recibo un 15% 0 10%
   if (membresia == 1)
   {
    if (entradas > 5) 
    {
        cout << "Usted aplica para un descuento de 15%." << endl;
    } else {
        cout << "Usted aplica para un descuento de 10%." << endl;
    }
   } else { //Si no es miembro pero compro mas de 10 entradas se aplica este else con el if (entradas > 10)
    if (entradas > 10)
    {
        cout << "Usted aplica para un descuento de 5%." << endl;
    } else { //Si no es miembro ni compro mas de 10 entradas no aplica para un descuento
        cout << "No aplica para ningun descuento." << endl;
    }
   }
   return 0;
    
}