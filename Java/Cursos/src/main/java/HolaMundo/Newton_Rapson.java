package HolaMundo;
public class Newton_Rapson {
    public static double Newton_Rapson(int n){
        double x;
        if(n==0){
            return 3.5;
        }else{
            x=Newton_Rapson(n-1);
            x=x-((Math.pow(x,x)-100)/(Math.pow(x,x)*(1+Math.log(x))));
            return x;
        }
    }    
    public static void main(String[] args){
        int n=100;
        double m=Newton_Rapson(n);
        
        System.out.println("El número calculado en "+n+" iteraciones es "+m);
        System.out.println("Y ese número elevado a si mismo es: "+Math.pow(m,m));
        
    }
}
