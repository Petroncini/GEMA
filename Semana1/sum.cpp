#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(void) {
    int n, x;
    cin >> n >> x;
    int d;
    
    map<int, int> pos;
    
    

    for(int i = 0; i < n; i++) {
        cin >> d;
        
        if(pos.find(x - d) != pos.end()) {
            std::cout << i + 1 << " " << pos[x - d] << "\n";
            return 0;
        }

        pos[d] = i + 1;
    }


    
    std::cout << "IMPOSSIBLE\n";

}

