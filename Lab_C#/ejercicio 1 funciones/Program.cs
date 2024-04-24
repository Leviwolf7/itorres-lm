using System;

class Program {

    static double porcentajeVentas() {
        return .15;
    }
    static void Main() {
        double venta, sueldoNeto, bono = 125;

        Console. Write("Ingrese el total de la venta: ");
        venta = double.Parse(Console.ReadLine());

        sueldoNeto = venta * porcentajeVentas();

        if(venta >= 1500) {
            Console.WriteLine("Usted recibe un bono de $125 dolares, continue con un buen trabajo.");
            sueldoNeto += bono;
        } else {
            Console.WriteLine("Siga trabajando duro para alcanzar la meta de $1500 dolares en ventas.");
        }

        Console.WriteLine("Su sueldo neto es de: $" + sueldoNeto);
    }
}