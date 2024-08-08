#include <bits/stdc++.h>

using namespace std;

int main(void){
    int q;
    cin >> q;
    for (long long int n = 1; n < q + 1; n++)
    {
        printf("%lli\n", (n*n * (n*n - 1))/2 - 4*(n-1)*(n-2));
    }
}