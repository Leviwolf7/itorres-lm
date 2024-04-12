using System;

class Program
{
    static void Main()
    {
        // Se siguen utilizando las mismas variables
        double[] temperatura = new double[12];
        double sum = 0;

        int i = 0;
        do // Se cambia el ciclo while por un ciclo do while para que se ejecute al menos una vez
        {
            Console.Write("Entra la temperatura del mes " + (i + 1) + ": ");
            temperatura[i] = Convert.ToDouble(Console.ReadLine());
            sum += temperatura[i];
            i++;
        } while (i < 12); //Se mantiene la condición de que se ejecute 12 veces

        double promedio = sum / 12;
        Console.WriteLine("El promedio de las temperaturas es " + promedio);
    }
}
