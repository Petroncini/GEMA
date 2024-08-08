#include <bits/stdc++.h>

using namespace std;

int main(void){
    int l, c;
    cin >> l >> c;

    int tile_2;
    tile_2 = 2*(l-1) + 2*(c-1);

    int tile_1;
    tile_1 = l*c + (l-1)*(c-1);

    cout << tile_1 << "\n";
    cout << tile_2 << "\n";
}