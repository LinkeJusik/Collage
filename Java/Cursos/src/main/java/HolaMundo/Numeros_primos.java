package HolaMundo;
public class Numeros_primos {
    public static void main(String[] args){
        int j,i,cont;
	
        for(i=2;i<1000;i++){
            j=1;
            cont=0;
            while(j<=i){
                if(i%j==0){
                    cont++;
                }
                j++;
            }
            if(cont==2){
                System.out.println(i+" es un número primo");
            }
        }
    }
}
