#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, k;
    cin >> n >> k;

    vector<int> notas(n);

    for (int i = 0; i < n; i++)
    {
        cin >> notas[i];
    }

    
    sort(notas.begin(), notas.end());

    cout << notas[n - k] << "\n";
}
/*
3 1
92 83 98

4 2
1 2 3 4


*/