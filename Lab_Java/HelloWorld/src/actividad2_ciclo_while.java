import java.util.Scanner;

public class actividad2_ciclo_while {
    public static void main(String[] args) {
        double[] temperatura = new double[12]; //Esta es una forma de almacenar en la variable un array de 12 elementos en Java
        double sum = 0; //Variable para almacenar la suma de las temperaturas
        Scanner scanner = new Scanner(System.in);
        int i = 0; //Variable para el ciclo while

        //Aquí se utiliza el ciclo while para pedir las temperaturas de los 12 meses
        while (i < 12) {
            System.out.print("Entra la temperatura del mes " + (i + 1) + ": "); //No se puso println para que no salte linea
            temperatura[i] = scanner.nextDouble(); //scanner.nextDouble() se utiliza para leer un número de tipo double o que se ingrese en Java
            sum += temperatura[i];//Se suma la temperatura ingresada a la variable sum y se le asigna
            i++; //Incrementa la variable i
        }
        //Calcular el promedio de las temperaturas
        double promedio = sum / 12;
        System.out.println("El promedio de las temperaturas es " + promedio);

        scanner.close();
    }
}