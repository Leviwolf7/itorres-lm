using System;

class Program
{
    static void Main()
    {
        double[] temperatura = new double[12];//Aquí la variable que tenga un array de 12 elementos se escribe de esta manera en C#
        double sum = 0;

        for (int i = 0; i < 12; i++) //Se crea el for bastante parecido a los otros lenguajes
        {
            Console.Write("Entra la temperatura del mes " + (i + 1) + ": ");//Console.Write muestra el mensaje y (i + 1) muestra un numero entero del 1 al 12
            temperatura[i] = Convert.ToDouble(Console.ReadLine()); //Convert.ToDouble convierte el valor de la consola a un valor double y lo guarda en la variable temperatura[i]
            sum += temperatura[i];//Se asigna el valor de temperatura[i] a sum y se le suma los valores
        }

        //Aquí se calcula el promedio de las temperaturas y se muestra el promedio
        double promedio = sum / 12;
        Console.WriteLine("El promedio de las temperaturas es " + promedio);
    }
}