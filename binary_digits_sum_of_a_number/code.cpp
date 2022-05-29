#include <iostream>

int main() {
    int n;
    std::cin>> n;
    int sum= 0;
    while( n>0 ) {
        int rem= n%2;
        sum+= rem;
        n/= 2;        
    }
    std::cout<< sum<< '\n';
    return 0;
}