#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;

    int arr[200000];

    long long  moves = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i - 1]){
            moves += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    
    cout << moves << "\n";
}