#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, in = 1;
    cin >> n;
    int tower_count = 0;
    multiset<int> towers;
    towers.insert(0);

    for (int i = 0; i < n; i++)
    {
        auto it = towers.begin();
        it++;
        auto rit = towers.end();
        rit--;


        cin >> in;
        
        

        for (; it != towers.end(); it++)
        {
            //printf("in: %i, it: %i, rit: %i, towers: %i\n", in, *it, *rit, tower_count);

            
            if (*rit <= in && *rit >= *it){
                
                //printf(" %i <= %i end!\n", *rit, in);
                it = towers.end();
                break;
            }
            if (*it > in){
                //printf("Begin!\n");
                towers.erase(it);
                towers.insert(in);
                break;
            } 
            if(*rit != 0){
                rit--;
            }
        }

        if(it == towers.end()){
            towers.insert(in);
            tower_count++;
        }
    }

    cout << tower_count << "\n";
    

    
    

}