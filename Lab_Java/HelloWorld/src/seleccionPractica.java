import java.util.Scanner;

public class seleccionPractica {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Introduce un numero: ");
        int n = scanner.nextInt();

        if (n > 0) {
            System.out.println("El numero es positivo");
        }

        scanner.close();
    }
}