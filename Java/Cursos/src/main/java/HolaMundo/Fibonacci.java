package HolaMundo;
import java.util.Scanner;
public class Fibonacci {
    public static int Fibonacci(int n){
        if (n==0){
            return 0;
        }else if(n==1){
            return 1;
        }else{
            return Fibonacci(n-1)+Fibonacci(n-2);
        }
    }
    public static void main(String[] args){
        int a,b;
        Scanner tec = new Scanner(System.in);
        System.out.print("Ingrese el n'simo número de Fibonacci que desee calcular: ");
        a = tec.nextInt();
        
        if(a>=0){
            System.out.println("El elemento número "+a+" de Fibonacci es "+Fibonacci(a));
        }else{
            System.out.println("Error, tiene que ser un número positivo");
        }
    }
}
