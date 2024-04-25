#include <iostream>
#include <cmath>

using namespace std;
int find_nearest(int i, int n, int tape[]);

int main() {
    int n;
    cin >> n;

    int tape[n];

    for (int i = 0; i < n; i++) {
        cin >> tape[i];
    }

    for (int i = 0; i < n; i++) {
        if (tape[i] == -1) {
            int dis = find_nearest(i, n, tape);
            tape[i] = dis;
        }   
    }

    for (int i = 0; i < n; i++) {
        cout << tape[i] << " "; 
    }
    cout << "\n";
}

int find_nearest(int i, int n, int tape[]) {
    int lowest = 100000;
    int dis = 0;

    //cout << "looking at " << i << "\n";

    int right_index= i;
    int left_index = i;

    int head = tape[i];
    //cout << "head: " << head << "\n";

    //look right
    //cout << "looking right \n";

    while (head != 0) {
        if(right_index > n - 2) {
            cout << "";
            dis =  1000000;
            head = 0;
            break;
        }
         //cout << "righ_index: " << right_index<<  ", head: " << head << ", dis: " << dis << "\n";

        dis++;
        right_index++;
        head = tape[right_index];
        
        
    }

    //cout << "dis: " << dis << "\n";

    if (dis < lowest) {
        lowest = dis;
    }

    //cout << "lowest: " << lowest << "\n";

    dis = 0;
    head = tape[i];

    //cout << "looking left \n";

    while (head != 0) {
        if(left_index < 0) {
            //cout << "overshoot!\n";
            dis =  100000;
            head = 0;
            break;
        }

        //cout << "head: " << head << ", dis: " << dis << "\n";

        dis++;
        left_index--;
        head = tape[left_index];
        
        
       
    }

    //cout << "dis: " << dis << "\n";

    if (dis < lowest) {
        lowest = dis;
    }

    // cout << "lowest: " << lowest << "\n";

    return lowest;

}