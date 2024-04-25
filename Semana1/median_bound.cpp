#include <iostream>
#include <set>
#include <iterator>
#include <cstdlib>

using namespace std;

int n, k;
long *arr;

multiset<int> lower;
multiset<int> upper;

multiset<int>::iterator lower_iter = lower.begin();
multiset<int>::iterator upper_iter = upper.begin();

void del(int i);
void ins(int i);
void adjust(void);


int main(void) {
    
    cin >> n >> k;
    arr = new long[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    lower.insert(arr[0]);

    for(int i = 1; i < k; i++) {
        ins(i);
    }

    adjust();
    cout << *lower.rbegin() << " ";

    for(int i = k; i < n; i++) {
        lower_iter = lower.begin();
        upper_iter = upper.begin();

        ins(i);
        adjust();

        del(i);
        adjust();
        
        cout << *lower.rbegin() << " ";
    }

    cout << "\n";
}

void ins(int i) {
        int curr = arr[i];

        if(arr[i] > *lower.rbegin()) {
            upper.insert(curr);

        } else {
            lower.insert(curr);
        }

        adjust();
}

void del(int i) {
    int prev = arr[i - k];

    if(upper.find(prev) != upper.end()) {
            upper.erase(upper.find(prev));

        } else {
            lower.erase(lower.find(prev));
            
        }
    adjust();
}

void adjust(void) {
    int lowersize = lower.size();
    int uppersize = upper.size();

    if (uppersize > k / 2)
    {
        lower.insert(*upper.begin());
        upper.erase(upper.find(*upper.begin()));
    } 

    if (lowersize > (k + 1) / 2)
    {
        upper.insert(*lower.rbegin());
        lower.erase(lower.find(*lower.rbegin()));
    }
    
}