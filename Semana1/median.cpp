#include <iostream>
#include <cstdlib>
#include <set>
#include <iterator>

using namespace std;

multiset<int> digits;
multiset<int>::iterator iter = digits.begin();

void median(void);

int main(void) {
    int n, k;
    cin >> n >> k;

    int data[n];

    for(int i = 0; i < n; i++) {
        cin >> data[i];
    }

    for (int i = 0; i < k; i++) {
            digits.insert(data[i]);
    }

    
    median();
   

    for(int i = 1; i < n - k + 1; i++) {
        
        iter = digits.find(data[i - 1]); 
        digits.erase(iter);
        digits.insert(data[i + k - 1]);
        
        median();
    }
    cout << "\n";
}

void median(void) {
    iter = digits.begin();

    if (digits.size() % 2 != 0) {
        advance(iter, digits.size()/ 2);
        cout << *iter << " ";
    } else {
        advance(iter, digits.size()/2 - 1);
        cout << *iter << " ";
    }
}

