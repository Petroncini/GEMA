#include <iostream>

using namespace std;

int main(){
    int S[] = {1,5,10,25,50,100};
    int v;
    cin >> v;
    int c = 0;
    int i = 5;

    while(v > 0){
        if(v >= S[i]){
            v -= S[i];
            c++;
        } else{
            i--;
        }
    }
    cout << c << "\n";
    

    return 0;
}
