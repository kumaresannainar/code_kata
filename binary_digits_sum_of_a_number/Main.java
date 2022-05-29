package code_kata.binary_digits_sum_of_a_number;
import java.util.*;

public class Main {
    public static void main( String[] args ) {
        var input= new Scanner( System.in );
        int n= input.nextInt();
        int sum= 0;
        while( n>0 ) {
            int rem= n%2;
            sum+= rem;
            n/= 2;   
        }
        System.out.println( Integer.toString( sum ) );
        input.close();
    }
}
