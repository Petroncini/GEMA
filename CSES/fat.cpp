#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, count = 0;
    cin >> n;
    for(int i = 5; i <= n; i*=5){
        count += n/i;
    }
    cout << count << "\n";

}

