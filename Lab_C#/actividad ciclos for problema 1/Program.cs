using System;

class Program {
    static void Main() {
        Console.Write("Ingrese su nombre: ");
        string name = Console.ReadLine(); //Aquí lo hice diferente y pedí que ingrese el nombre

        //Se utilizo el For para repetir 10 veces el nombre
        for (int i = 0; i < 10; i++) {
            Console.Write("Hola ");// Puse solo Write para que no salte linea
            Console.WriteLine(name);
        }
    }
}