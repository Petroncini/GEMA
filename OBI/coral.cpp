#include <bits/stdc++.h>

using namespace std;

int main(void){
    int rings[4];
    set <int> ring;
    cin >> rings[0] >> rings[1] >> rings[2] >> rings[3];

    for (int i = 0; i < 4; i++)
    {
        ring.insert(rings[i]);
    }
    

    if((rings[0] == rings[2] || rings[1] == rings[3]) && ring.size() == 3){
        cout << "V\n";
    } else {
        cout << "F\n";
    }

    


}