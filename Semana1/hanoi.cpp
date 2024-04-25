#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int counter;

int main() {
    long long int n;
    int i = 1;
    while(n != 0) {

        counter = 0;
        cin >> n;

        if(n == 0) {
            break;
        }

        cout << fixed << setprecision(0) << "Teste " << i << "\n" << pow(2, n) - 1 << "\n\n";
        i++;
    }  

}

