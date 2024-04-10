using System;

class Program {
    static void Main() {
        Console.Write("Ingrese su nombre: ");
        string name = Console.ReadLine(); //Aquí usuario ingresa su nombre y se guarda en la variable name

        int i = 0; // El acumulador lo puse aquí afuera del While, trate hacerlo como en el For pero no funciono
        while (i < 10) {
            Console.Write("Hola ");
            Console.WriteLine(name);
            i++; //En este caso como lo logre hacer fue poner el contador aquí diferente al for que se ponía arriba junto al for
        }
    }
}
