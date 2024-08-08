#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, c, m, in;
    cin >> n >> c >> m;
    int stamped[c];
    set<int> bought;

    for (int i = 0; i < c; i++)
    {
        cin >> stamped[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> in;
        bought.insert(in);
    }

    int missing = 0;

    for (int i = 0; i < c; i++)
    {
        if(bought.find(stamped[i]) == bought.end()){
            missing++;
        }
    }
    
    cout << missing << "\n";
    
}