#include <bits/stdc++.h>

using namespace std;

int main(void){
    long long int n;
    cin >> n;
    long long int sum = ((1+n)/2.0) * n;

    long long acc = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int in;
        cin >> in;
        acc += in;
    }
    
    cout << sum - acc << "\n";
}