#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, b;
    int files = 0;
    cin >> n >> b;

    vector<int> archs;

    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        archs.push_back(in);
    }

    sort(archs.begin(), archs.end());

    

    for(int i = 0, j = n - 1; j >= i ; j--){
        //printf("file[%d]: %d, file[%d]: %d\n", i, archs[i], j, archs[j]);

        if(archs[i] + archs[j] <= b){
            //printf("dois é par!\n");
            i++;
        } else {
            //printf("nope :(\n");
        }
        files++;
    }
        
    cout << files << "\n";
    return 0;
}
