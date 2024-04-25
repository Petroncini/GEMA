#include <iostream>
#include <set>


using namespace std;

int main(void) {
    set<int> diffs;

    int n;
    cin >> n;

    int m;

    for(int i = 0; i < n; i++) {
        cin >> m;
        
        if(diffs.find(m) == diffs.end()) {
            diffs.insert(m);
        }
    }

    cout << diffs.size() << "\n";
}