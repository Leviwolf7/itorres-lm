using System;

class Program {
    static void Main(string[] args) {
        Console.Write("Introduce un numero: ");
        int n = int.Parse(Console.ReadLine());

        if (n > 0) {
            Console.WriteLine("EL numero es positivo");
        }
    }
}