#include <stdio.h>
int main() {
    int n;
    scanf( "%d", &n );
    int array[ n ];
    for( int i=0; i<n; i++ ) {
        scanf( "%d", &array[ i ] );
    }
    for( int i=0; i<n; i++ ) {
        if( i == n-1 ) {
            array[ i ]= array[ i ] ^ 0;
        }
        else {
            array[ i ]= array[ i ] ^ array [ i+1 ];
        }
    }
    for( int i=0; i<n; i++ ) {
        printf( "%d ", array[ i ] );
    }
    printf( "\n" );
    return 0;
}