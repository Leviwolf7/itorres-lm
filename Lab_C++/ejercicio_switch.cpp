#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout <<"Bienvenido a Johanna's Cafe: " <<endl;
    cout <<"MENU" <<endl;
    cout <<"1. Cafe " <<endl;
    cout <<"2. Te " <<endl;
    cout <<"3. Chocolate Caliente " <<endl;
    cout <<"4. JUgo de Naranja " <<endl;
    cout <<"-----------------------------------------" <<endl;
    cout <<"Por favor Selecciona tu bebida: ";
    cin >> opcion;

    switch(opcion)
    {
        case 1: //Cafe
            cout <<"El precio del Cafe es $2" <<endl;
            break;

        case 2: //Te
            cout <<" El precio del Te es $1.5" <<endl;
            break;

        case 3: //Chocolate Caliente
            cout <<"El precio del Chocolate Caliente es $2.5" <<endl;
            break;

        case 4: //Jugo de Naranja
            cout <<"EL precio del Jugo de Naranja es $3" <<endl;
            break;

        default: //En caso de que el usuario ingrese una opcion no valida
            cout <<"Opcion NO valida." <<endl;
    }

    return 0;
}