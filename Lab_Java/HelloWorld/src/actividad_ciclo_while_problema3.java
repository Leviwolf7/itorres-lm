import java.util.Scanner; // Se le añade el import para poder usar el Scanner

public class actividad_ciclo_while_problema3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Se declaran las variables
        float horasTrabajadas, pagoPorHora, sueldoBruto, sueldoNeto, horasExtra, pagoExtra, descuento;
        float totalNomina = 0, totalHorasExtra = 0, totalPagoExtra = 0;

        // Se crea un ciclo while para pedir los datos de los empleados
        int i = 0;
        while (i < 3) {
            System.out.print("Ingrese las horas trabajadas del empleado " + (i + 1) + ": ");
            horasTrabajadas = scanner.nextFloat();

            System.out.print("Ingrese el pago por hora del empleado " + (i + 1) + ": ");
            pagoPorHora = scanner.nextFloat();
            
            //  Se calcula el sueldo neto y el sueldo bruto con el descuento de 7%
            sueldoBruto = horasTrabajadas * pagoPorHora;
            descuento = sueldoBruto * 0.07f;
            sueldoNeto = sueldoBruto - descuento;
            
            // Se calculan las horas extra y el pago extra
            if (horasTrabajadas > 40) {
                horasExtra = horasTrabajadas - 40;
                pagoExtra = horasExtra * pagoPorHora * 2;
            } else {
                horasExtra = 0;
                pagoExtra = 0;
            }

            totalNomina += sueldoNeto + pagoExtra;
            totalHorasExtra += horasExtra;
            totalPagoExtra += pagoExtra;

            System.out.println("Sueldo bruto: " + sueldoBruto + ", sueldo neto: " + sueldoNeto + ", horas extra: " + horasExtra + ", pago extra: " + pagoExtra);
            System.out.println("-------------------------------------------------------------------------------> " + (i + 1));

            i++;
        }

        System.out.println("Total pagado en nomina: " + totalNomina + ", total de horas extra: " + totalHorasExtra + ", total pagado en horas extra: " + totalPagoExtra);

        scanner.close();
    }
}