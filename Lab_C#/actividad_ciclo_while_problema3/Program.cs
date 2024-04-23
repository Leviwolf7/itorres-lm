using System;

class Program
{
    static void Main()
    {
        
        float horasTrabajadas, pagoPorHora, sueldoBruto, sueldoNeto, horasExtra, pagoExtra, descuento;
        float totalNomina = 0, totalHorasExtra = 0, totalPagoExtra = 0;

        // Se escribe el codigo casi igual que en el ciclo for pero en este caso se utiliza un ciclo while
        int i = 0;
        while (i < 3)
        {
            Console.Write("Ingrese las horas trabajadas del empleado " + (i + 1) + ": ");
            horasTrabajadas = float.Parse(Console.ReadLine()); 

            Console.Write("Ingrese el pago por hora del empleado " + (i + 1) + ": ");
            pagoPorHora = float.Parse(Console.ReadLine());

            sueldoBruto = horasTrabajadas * pagoPorHora;
            descuento = sueldoBruto * 0.07f;
            sueldoNeto = sueldoBruto - descuento;

            if (horasTrabajadas > 40)
            {
                horasExtra = horasTrabajadas - 40;
                pagoExtra = horasExtra * pagoPorHora * 2;
            }
            else
            {
                horasExtra = 0;
                pagoExtra = 0;
            }

            totalNomina += sueldoNeto + pagoExtra;
            totalHorasExtra += horasExtra;
            totalPagoExtra += pagoExtra;

            Console.Write("Sueldo bruto: " + sueldoBruto + ", sueldo neto: " + sueldoNeto);
            Console.WriteLine(", horas extra: " + horasExtra + ", pago extra: " + pagoExtra);
            Console.WriteLine("-------------------------------------------------------------------------------> " + (i + 1));

            i++;
        }
        Console.Write("Total pagado en nomina: " + totalNomina);
        Console.Write(", total de horas extra: " + totalHorasExtra);
        Console.WriteLine(", total pagado en horas extra: " + totalPagoExtra);
    }
}