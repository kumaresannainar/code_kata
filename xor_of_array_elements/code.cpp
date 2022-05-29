#include <iostream>

int main() {
    int n;
    std::cin>> n;
    int array[ n ];
    for( int i=0; i<n; i++ ) {
        std::cin>> array[ i ];
    }
    for( int i=0; i<n; i++ ) {
        if( i == n-1 ) {
            array[ i ]= array[ i ] ^ 0;
        }
        array[ i ]= array[ i ] ^ array [ i+1 ];
    }
    for( int i=0; i<n; i++ ) {
        std::cout<< array[ i ]<< ' ';
    }
    std::cout<< '\n';
    return 0;
}