using System;

class Program
{
    static void Main(string[] args)
    {
        // Pedir al usuario cuantos años tiene enl la empresa
        Console.WriteLine("Ingrese los años que tiene en la empresa:");
        int yearsAntiguedad = int.Parse(Console.ReadLine());

        // Esto verifica si el empleado recibe el bono
        if (yearsAntiguedad >= 5)
        {
            // Si tiene 5 años o más recibe el bono de $1000
            Console.WriteLine("Usted aplica para un bono de $1000.");
        }
    }
}
