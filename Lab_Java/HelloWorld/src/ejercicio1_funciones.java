import java.util.Scanner;

public class ejercicio1_funciones {

    static double porcentajeVentas() {
        return .15;
    }

    public static void main(String[] args) {
        double venta, sueldoNeto, bono = 125;
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese el total de la venta: ");
        venta = scanner.nextDouble();

        sueldoNeto = venta * porcentajeVentas();

        if(venta >= 1500) {
            System.out.println("Usted recibe un bono de $125 dolares, continue con un buen trabajo.");
            sueldoNeto += bono;
        } else {
            System.out.println("Siga trabajando duro para alcanzar la meta de $1500 dolares en ventas.");
        }

        System.out.println("Su sueldo neto es de: $" + sueldoNeto);

        scanner.close();
    }
}