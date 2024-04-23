using System;

class Program
{
    static void Main()
    {
        // Variables y acumuladores
        float horasTrabajadas, pagoPorHora, sueldoBruto, sueldoNeto, horasExtra, pagoExtra, descuento;
        float totalNomina = 0, totalHorasExtra = 0, totalPagoExtra = 0;

        // Se utiliza un ciclo for para repetir el proceso 3 veces
        for (int i = 0; i < 3; i++)
        {
            Console.Write("Ingrese las horas trabajadas del empleado " + (i + 1) + ": "); //Imprime el mensaje en pantalla
            horasTrabajadas = float.Parse(Console.ReadLine()); //Lee el dato ingresado por el usuario y float.Parse lo convierte a float

            Console.Write("Ingrese el pago por hora del empleado " + (i + 1) + ": ");
            pagoPorHora = float.Parse(Console.ReadLine());

            // Se calcula el sueldo bruto y el sueldo neto con el descuento de 7%
            sueldoBruto = horasTrabajadas * pagoPorHora;
            descuento = sueldoBruto * 0.07f; // La f indica que es un tipo float la puse sin la f y me dio problemas la solucion que encontre fue poner la f
            sueldoNeto = sueldoBruto - descuento;

            // Se calculan las horas extra y el pago extra si trabajo mas de 40 horas
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

            // Se calcula total de la nomina, total de horas extra y total pagado en horas extra
            totalNomina += sueldoNeto + pagoExtra;
            totalHorasExtra += horasExtra;
            totalPagoExtra += pagoExtra;

            // Se muestra el sueldo bruto, sueldo neto, horas extra y pago extra
            Console.Write("Sueldo bruto: " + sueldoBruto + ", sueldo neto: " + sueldoNeto); //No puse Console.WriteLine porque queria que se imprimiera en la misma linea
            Console.WriteLine(", horas extra: " + horasExtra + ", pago extra: " + pagoExtra);
            Console.WriteLine("-------------------------------------------------------------------------------> " + (i + 1));
        }
        // Se muestra el total pagado en la nomina, total de horas extra y total pagado en horas extra
        Console.Write("Total pagado en nomina: " + totalNomina);
        Console.Write(", total de horas extra: " + totalHorasExtra);
        Console.WriteLine(", total pagado en horas extra: " + totalPagoExtra);
    }
}