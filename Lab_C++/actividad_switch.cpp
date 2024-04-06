#include <iostream>
using namespace std;

int main()
{
    //Variable en la que se guardara la opcion que el usuario desee
    int opcion;

    //Aqui se le muestra las diferentes opciones de los instrumentos
    cout <<"Bienvenido a la Tienda de Musica" <<endl;
    cout <<"Instrumentos: " <<endl;
    cout <<"1. Guitarras " <<endl;
    cout <<"2. Pianos " <<endl;
    cout <<"3. Baterias " <<endl;
    cout <<"4. Violines " <<endl;
    cout <<"5. Flautas" <<endl;
    cout <<"-----------------------------------------" <<endl;
    cout <<"Por favor Seleccione el instrumento que desea colocando el numero en el orden en que este se encuentre: ";
    cin >> opcion; //Se guarda la opcion que el usuario eligio

        switch(opcion)
    {
        case 1: //Guitarras
            cout <<"El Descuento de la Guitarra es 10%" <<endl;
            break;

        case 2: //Pianos
            cout <<" El descuento de los Pianos es 15%" <<endl;
            break;

        case 3: //Baterias
            cout <<"El descuento de las Baterias es 20%" <<endl;
            break;

        case 4: //Violines
            cout <<"EL descuento de los Violines es 12%" <<endl;
            break;

        case 5: //Flautas
            cout <<"EL descuento de las flautas es 8%" <<endl;
            break;

        default: //En caso de que el usuario ingrese una opcion no valida
            cout <<"Opcion NO valida. Ingrese una nueva opcion." <<endl;
    }

    return 0;
}