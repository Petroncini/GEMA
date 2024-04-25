#include <iostream>
#include <set>

using namespace std;

int main (void) {
    multiset <int> list;
    std::multiset<int>::iterator it;
    int n, q, in;

    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        list.insert(in);
    }

    for (int i = 0; i < q; i++)
    {
        cin >> in;
        
        it = list.lower_bound(in);

        if (it != list.end() && *it == in) { 
            int index = distance(list.begin(), it); 
            cout << index <<  "\n";

        } else {
            cout << -1 <<  "\n";
        }

    }
    
    
}