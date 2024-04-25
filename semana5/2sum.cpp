#include <iostream>
#include <map>

using namespace std;

int main(void){
    int n, x, in;
    cin >> n >> x;

    map<int, int> vals;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        if (vals.find(x - in) != vals.end()){
            cout << i + 1 << " " << vals[x - in] + 1 << "\n";
            return 0;
        }
        vals[in] = i;
    }

    printf("IMPOSSIBLE\n");
    
}