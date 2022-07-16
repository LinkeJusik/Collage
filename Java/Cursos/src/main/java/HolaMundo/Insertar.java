package HolaMundo;
import java.util.Scanner;
public class Insertar {
    public static void main(String[] args){
        String nombre;
        
        Scanner teclado = new Scanner(System.in);
        System.out.print("Inserte tu nombre: ");
        nombre = teclado.nextLine();
        System.out.println("Hola "+nombre+", alias el puto");
    }   
}