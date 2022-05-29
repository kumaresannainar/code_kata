package code_kata.xor_of_array_elements;
import java.util.*;

public class Main {
    public static void main( String[] args ) {
        var input= new Scanner( System.in );
        int n= input.nextInt();
        int[] array= new int[ n ];
        for( int i=0; i<n; i++ ) {
            array[ i ]= input.nextInt();
        }
        for( int i=0; i<n; i++ ) {
        if( i == n-1 ) {
            array[ i ]= array[ i ] ^ 0;
        }
        else {
            array[ i ]= array[ i ] ^ array [ i+1 ];
        }
        System.out.print( Integer.toString( array[ i ] )+' ' );
    }
    System.out.print( '\n' );
    input.close();
    }
}