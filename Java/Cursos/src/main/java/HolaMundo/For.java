package HolaMundo;
import java.util.Scanner;
public class For {
    public static void main(String args[]){
        int i,n;
        
        Scanner tec = new Scanner(System.in);
        System.out.print("Incerte un número entenro ");
        n = tec.nextInt();
        
        for(i=0;i<n;i++){
            System.out.println("Estamos en la parte del ciclo "+i);
        }
    }
}
