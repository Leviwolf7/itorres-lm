import java.util.Scanner;

public class Biblioteca {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Esto solicita al usuario qu ingrese si esta activa o no
        System.out.print("¿La tarjeta de la biblioteca esta activa? (Si/No)");
        String estadoTarjeta = scanner.nextLine();

        // Esto verifica si la tarjeta esta activa
        if (estadoTarjeta.equalsIgnoreCase("Si")) {
            // Si esta activada puede usar prestamos
            System.out.println("Puedes realizar prestamos.");
        }

        scanner.close();
    }
}
