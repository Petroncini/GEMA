#include <iostream>
#include <cstdlib>
#include <set>
#include <map>
#include <iterator>

using namespace std;

int main(void) {
    int n, k;
    cin >> n >> k;

    int data[n];

    for(int i = 0; i < n; i++) {
        cin >> data[i];
    }

    multimap<int, int> digits;
   

    for (int i = 0; i < k; i++) {
            digits[data[i]] = data[i];
    }

    multimap<int, int>::iterator iter = digits.begin();

    cout << "digits size: " << digits.size() << "\n";
    cout << iter->second << "\n";

    // cout << "window: ";
    
    // for(int l = 0; l < k; l++) {
    //     cout << iter->second;
    //     advance(iter, 1);
    // }
    // cout << "\n";

    

    if (digits.size() % 2 != 0) {
        advance(iter, digits.size()/ 2);
        cout << iter->second << " ";
    } else {
        float median = 0;
        advance(iter, digits.size()/2 - 1);
        cout << iter->second << " ";
    }

    // std::cout << "flag\n";

    for(int i = 1; i < n - k + 1; i++) {
        
        iter = digits.begin();
        //iter = digits.find(data[i - 1]); // aqui que fode
        //cout << "iter: " << *iter << "\n"; 
        digits.erase(data[i - 1]);
        //cout << "data[i + k]:  " << data[i + k - 1] << "\n"; 
        digits[data[i + k - 1]] = data[i + k - 1];
        iter = digits.begin();

        cout << "digits size: " << digits.size() << "\n";

        cout << "windowwwww: ";
    
        for(int l = 0; l < k; l++) {
            cout << iter->second;
            advance(iter, 1);
        }
        cout << "\n";

        

        
        if (digits.size() % 2 != 0) {
            advance(iter, digits.size()/ 2);
            cout << iter->second << " ";
        } else {
            advance(iter, digits.size()/2 - 1);
            cout << iter->second << " ";
        }
    }
    cout << "\n";
}

