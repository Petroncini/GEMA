#include <bits/stdc++.h>

using namespace std;

int nearCount(int a, int b);
void step(int n);

vector< vector<int> > life (50 + 2, vector<int> (50 + 2, 0));
vector< vector<int> > neighbours (50 + 2, vector<int> (50 + 2, 0));


int main(void){
    int n, q;
    cin >> n >> q;

    

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++){
            char in;
            cin >> in;
            life[i][j] = in - '0';
        }
    }

    for (int i = 0; i < q; i++)
    {
        step(n);
    }
    
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++){
            cout << life[i][j];
        }
        cout << '\n';
    }
}

int nearCount(vector< vector<int> > life, int a, int b){
    int count = 0;
    for (int i = -1; i < 2; i++)
    {
        for (int j = -1; j < 2; j++)
        {
            if(i == 0 && j == 0){
                continue;
            }
            if(life[a + i][b + j]){
                count++;
            }
        }
    }
    return count;
}

void step(int n){

    vector< vector<int> > copy (n + 2, vector<int> (n + 2, 0));

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++){
            int near = nearCount(life, i, j);
            if(life[i][j]){
                if(near < 2){
                    copy[i][j] = 0;

                } else if(near > 3){
                    copy[i][j] = 0;
                } else {
                    copy[i][j] = 1;
                }

            } else {
                if(near == 3){
                    copy[i][j] = 1;
                } else {
                    copy[i][j] = 0;
                }
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++){
            life[i][j] = copy[i][j];
        }
    }
}

/*
5 3
0 0 0 0 0
0 1 1 1 0
0 1 0 0 0
0 0 1 0 0
0 0 0 0 0


5 3
00000
01110
01000
00100
00000
*/