#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum= 0;
    while( n>0 ) {
        int rem= n%2;
        sum+= rem;
        n/= 2;
    } 
    printf( "%d\n", sum );
    return 0;
}