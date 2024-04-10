#include <iostream>
#include <string>

using namespace std;

int main() {
    int cantidadEstudiantes;
    
    // Aqui se ingresa la cantidad total de estudiantes
    cout << "Ingrese la cantidad total de estudiantes en el grupo: ";
    cin >> cantidadEstudiantes;
    
    // Variables para almacenar el nombre y la calificación de cada estudiante
    string nombres[cantidadEstudiantes];
    double calificaciones[cantidadEstudiantes];
    
    // Aqui se Ingresa el nombre y la calificación de cada estudiante
    for (int i = 0; i < cantidadEstudiantes; ++i) {
        cout << "Ingrese el nombre del estudiante " << i+1 << ": ";
        cin >> nombres[i];
        cout << "Ingrese la calificacion final de " << nombres[i] << ": ";
        cin >> calificaciones[i];
    }
    
    // Aqui se calcula el promedio
    double sumaCalificaciones = 0;
    for (int i = 0; i < cantidadEstudiantes; ++i) {
        sumaCalificaciones += calificaciones[i];
    }
    double promedioGeneral = sumaCalificaciones / cantidadEstudiantes;
    
    //Aqui se muestra el promedio general de las calificaciones del grupo
    cout << "El promedio general de las calificaciones del grupo es: " << promedioGeneral << endl;
    
    return 0;
}
