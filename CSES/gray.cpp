#include <bits/stdc++.h>

using namespace std;

void binprint(int n, int len);

int main(void){
    int n;
    cin >> n;

    int code = 0;
    int flip;
    int max = pow(2, n);
    int prev = 0;
    int counter = 0;

    for (int i = 0; i < max; i++)
    {
        binprint(code, n);
        counter++;
        flip = (counter) & (~prev);
        prev = counter;
        code = code ^ flip;
        printf("\n");
    }
    
}
void binprint(int n, int len){
    stack<int> bits;
    for (int i = 0; i < len; i++)
    {
        bits.push(n%2);
        n>>=1;
    }
    
    for (int i = 0; i < len; i++)
    {
        printf("%i", bits.top());
        bits.pop();
    }
}