#include <bits/stdc++.h>

using namespace std;;

int main(void){
    int n, k, u;
    cin >> n >> k >> u;

    vector< set<int> > cartelas;
    vector<int> rem;

    cartelas.resize(n);
    rem.resize(n);

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < k; j++)
       {
            int in;
            cin >> in;
            cartelas[i].insert(in);
       }
       rem[i] = k;
    }
    int winner = 0;
    for (int i = 0; i < u; i++)
    {
        int in;
        cin >> in;
        for (int j = 0; j < n; j++)
        {
            if(cartelas[j].find(in) != cartelas[j].end()){
                rem[j]--;
                if(rem[j] == 0){
                    cout << j + 1 << "\n";
                    winner = 1;
                }
            }
        }
        if(winner){
            return 0;
        }
    }
    
    

}