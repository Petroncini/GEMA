#include <iostream>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int n;
     
     cin >> n;
     
     cout << "N[0] = " << n << "\n";
     
     int prev = n;
     
     for (int i = 1; i < 10; i++) {
         cout << "N[" << i << "] = " << prev * 2 << "\n";
         prev *= 2;
     }
 
    return 0;
}