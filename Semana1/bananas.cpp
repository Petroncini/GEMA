#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
    long long int k, n, w;

    cin >> k >> n >> w;
    
    int b =  (w*((float)(2*k + (w-1)*k)/2)) - n;
    
    if(b < 0){
        b = 0;
    }

    cout << b << "\n";
}