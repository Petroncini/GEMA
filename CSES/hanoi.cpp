#include <bits/stdc++.h>

using namespace std;

void printTowers(vector< stack<int> > &towers) {
    for (int i = 0; i < 3; i++) {
        if (!towers[i].empty()) {
            stack<int> temp = towers[i];
            vector<int> elems;
            while (!temp.empty()) {
                elems.push_back(temp.top());
                temp.pop();
            }
            reverse(elems.begin(), elems.end());
            for (int j = 0; j < elems.size(); j++) {
                if (j != 0) cout << ", ";
                cout << elems[j];
            }
        } else {
            cout << "_";
        }
        if (i < 2) cout << " | ";
    }
    cout << "\n";
}

int main(void){
    int n;
    cin >> n;

    int moves = pow(2, n);

    cout << moves - 1 << "\n";

    int prev_counter = 0;
    int counter = 0;
    int disk = 1;

    vector< stack<int> > towers(3);
    vector<int> disks(n, 0);


    for (int i = n; i > 0; i--)
    {
        towers[0].push(i);
    }

    for (int i = 0; i < 2*moves; i++)
    {
        //printTowers(towers);
        counter++;
        disk = log2((counter) & (~prev_counter)) + 1;
        
        prev_counter = counter;
        if(disk>n){
            continue;
        }
        

        cout << disks[disk] + 1 << " ";
        

        int next = disks[disk] + 1;
        if(next > 2){
            next = 0;
        }
        int next_top = n + 1;
        if(!towers[next].empty()){
            next_top = towers[next].top();
        }
        //printf("disk: %i, current tower: %i, next tower: %i, next top: %i\n", disk, disks[disk], next, next_top);
        while(next_top < disk){
            //printf("disk: %i, current tower: %i, next tower: %i, next top: %i\n", disk, disks[disk], next, next_top);
            next++;
            if(next > 2){
                next = 0;
            }
            if(!towers[next].empty()){
                next_top = towers[next].top();
            } else {
                next_top = n + 1;
            }
            //printf("after --> disk: %i, current tower: %i, next tower: %i, next top: %i\n", disk, disks[disk], next, next_top);
        }
        
        towers[disks[disk]].pop();
        towers[next].push(disk);
        disks[disk] = next;
        cout << next + 1 << "\n";

    }
    
}

