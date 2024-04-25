#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int n;

    cin >> n;

    int low = pow(10, 6);
    int pos = 0;
    int num;

    for (int i = 0; i < n; i++) {
        cin >> num;
        
        if (num < low)
        {
            low = num;
            pos = i;
        }
    }

    cout << "Menor valor: " << low << "\n";
    cout << "Posicao: " << pos << "\n";
}