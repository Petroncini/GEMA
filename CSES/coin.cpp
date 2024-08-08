#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        //cout << a << " " << b << " ";

        while(a > 0 && b > 0){
            //printf("a: %i, b: %i\n", a, b);
            int dif = abs(a - b);
            if (dif <= 2){
                int t = min(a/3, b/3) * 3;
                //printf("t: %i\n", t);
                a -= t;
                b -= t;
                if(a == 0 && b == 0){
                    break;
                }
            }
            dif /= 2;
            if (dif == 0){
                dif = 1;
            }
            if (a > b){
                a -= 2 * dif;
                b -= 1 * dif;
            } else {
                a -= 1 * dif;
                b -= 2 * dif;
            }
        }
        if(a == 0 && b == 0){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}