package HolaMundo;
import java.util.Scanner;
public class If {
    public static void main(String args[]){
        int a;
        String mensaje;
        
        Scanner tec = new Scanner(System.in);
        System.out.print("Inserte un valor a evaluar: ");
        a = tec.nextInt();
        
        if(a>0){
            mensaje="es un número positivo";
        }else if(a<0){
            mensaje="es un número negativo";
        }else{
            mensaje="es el cero, graciosito";
        }
        System.out.println("El número "+a+" "+mensaje);
    }
}