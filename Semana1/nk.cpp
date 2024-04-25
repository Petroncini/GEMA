#include <iostream>

using namespace std;

int main (){
    int n;
    int k;

    scanf("%i %i", &n, &k);

    int div = n + (k - (n%k));

    printf("%i\n", div);
}