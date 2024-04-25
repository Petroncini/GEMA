#include <iostream>
#include <cmath>

using namespace std;

int main (){
    long long int n;
    scanf("%lld", &n);


    long long int sum = ceil(n/2);

    

    if (n%2 == 1){
        sum += 1;
        sum *= -1;
    }

    printf("%lld\n", sum);
}

// 1000000000000000
