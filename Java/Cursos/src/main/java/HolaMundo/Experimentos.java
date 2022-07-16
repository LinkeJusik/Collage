
package HolaMundo;
public class Experimentos {

    public static void main(String[] args)
            {
bf: for ( int i=1; i <10; i++ ) {
     for ( int j=1; j<10; j++ ) {
       if ( j>i ) {
         System.out.println(" ");
         continue bf;
       }
       System.out.print( " " + (i*j) );
     }
   }
}
}
