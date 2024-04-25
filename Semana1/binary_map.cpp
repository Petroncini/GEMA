#include <iostream>
#include <unordered_map>

using namespace std;

int main(void) {
    int n, q;
    unordered_map <int, int> indexes;

    cin >> n >> q;

    int in, highest, first;

    cin >> highest;
    indexes[highest] = 0;
    first = highest;

    for(int i = 1; i < n; i++) {
        cin >> in;
        if (in > highest) {
            highest = in;
            indexes[in] = i; 
        }
    }

    for (int i = 0; i < q; i++)
    {
        cin >> in;
        
        int out = indexes[in];

        if (out == 0) {
            if (first == in) {
                cout << out << "\n";
            } else {
                cout << "-1\n";
            }
        } else {
            cout << out << "\n";
        }
        

    }
    
}