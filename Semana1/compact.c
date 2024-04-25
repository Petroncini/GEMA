#include <stdio.h>
#include <math.h>

int main(void) {
    short unsigned A, B, C;
    long long int n = 0;
    
    
    scanf("%hu %hu %hu", &A, &B, &C);
    
    n += C;
    n <<= 16;

    n += B;
    n <<= 16;

    n += A;
    
    
    printf("%lli\n", n);

    return 0;
}