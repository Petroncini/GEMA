#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int neighbouring(char plain[500][500], int k, int l, int n);

int main(void){
    int n, f;
    cin >> n >> f;

    char plain[500][500];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> plain[i][j];
        }
    }

    if(plain[0][0] - '0' <= f){
        plain[0][0] = '*';
    }

    int flooded = 1;
    while(flooded){
        flooded = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(plain[i][j] - '0' > f){
                    continue;
                }
                if(neighbouring(plain, i, j, n) && plain[i][j] != '*'){
                    plain[i][j] = '*';
                    flooded = 1;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << plain[i][j];
            if(j != n - 1){
                cout << ' ';
            }
        }
        cout << "\n";
    }

}

int neighbouring(char plain[500][500], int k, int l, int n){
    for (int i = -1; i < 2; i++)
    {
       for (int j = -1; j < 2; j++)
        {
            if((i == j) || (i == -1 && j== 1) || (i == 1 && j == -1)){
                continue;
            }
            int x = clamp(k + i, 0, n);
            int y = clamp(l + j, 0, n);
    

            if(plain[x][y] == '*'){
                return 1;
            }
        }
    }
    return 0;
}