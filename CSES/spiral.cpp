#include <bits/stdc++.h>

using namespace std;

long long int t, x, y, anchor;
void even();
void odd();

int main(void){
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> y >> x;
        anchor = (max(x, y)- 1) * (max(x, y)- 1);

        if(anchor % 2 == 0){
            even();
        } else{
            odd();
        }
    }
}

void even(){
    long long int a = 1;
    long long int b = max(x, y);

    long long int out = anchor;

    if(y == b){
        out += x - a + 1;
    } else {
        out += x;
        out += b - y;
    }
    
    printf("%lli\n", out);
    
}

void odd(){
    long long int a = max(x, y);
    long long int b = 1;

    long long int out = anchor;

    if(x == a){
        out += y - b + 1;
    } else {
        out += y;
        out += a - x;
    }
    
    printf("%lli\n", out);
}