#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    long long pow = 1;
    for (int i = 0; i < n; i++)
    {
        pow *= 2;
    }
    
    printf("%lli\n", pow);
}