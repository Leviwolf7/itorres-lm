using System;

class Program 
{
    static void Main() 
    {
        //Se utilizan las mismas variables que en el ciclo for
        double[] temperatura = new double[12];
        double sum = 0;

        int i = 0; //El acumulador se pone fuera del ciclo en el caso del while
        while (i < 12) 
        {
            Console.Write("Entra la temperatura del mes " + (i + 1) + ": ");
            temperatura[i] = Convert.ToDouble(Console.ReadLine());
            sum += temperatura[i];
            i++;
        }
        //Sacar el promedio y mostrarlo
        double promedio = sum / 12;
        Console.WriteLine("El promedio de las temperaturas es " + promedio);
    }
}