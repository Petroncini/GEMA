#include <iostream>

using namespace std;

void split(int n, int k);

int cnt;

int main() {
    int n, k;
    
    while(n != 0 && k != 0) {
        cin >> n >> k;
        if(n == 0 && k == 0) {
            break;
        }
        cnt = 0;
        split(n, k);
        cout << cnt << "\n";
    }
} 

void split(int n, int k) {

    if (n <= k) {
        cnt++;
        return;
    } else if (n%2 == 0) {
        split(n/2, k);
        split(n/2, k);
        
        
    } else {
        split(n/2, k);
        split(n/2 + 1, k);
    }
}