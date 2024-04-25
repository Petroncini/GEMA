#include <iostream>
#include <cstdlib>
#include <deque>
#include <algorithm>
#include <iterator>

using namespace std;

int main(void) {
    int n, k;
    cin >> n >> k;

    int data[n];

    for(int i = 0; i < n; i++) {
        cin >> data[i];
    }

    deque<int> digits;
    deque<int> sorted_digits;
   

    for (int i = 0; i < k; i++) {
            digits.push_back(data[i]);
    }
    sorted_digits = digits;
    sort(sorted_digits.begin(), sorted_digits.end());

    deque<int>::iterator iter = sorted_digits.begin();

    cout << "digits size: " << digits.size() << "\n";


    cout << "window: ";
    
    for(int l = 0; l < k; l++) {
        cout << *iter;
        advance(iter, 1);
    }
    cout << "\n";

    iter = sorted_digits.begin();

    

    if (digits.size() % 2 != 0) {
        //advance(iter, digits.size()/ 2);
        cout << sorted_digits[digits.size()/ 2] << " ";
    } else {
        // float median = 0;
        // advance(iter, digits.size()/2 - 1);
        // cout << *iter << " ";
        cout << sorted_digits[digits.size()/ 2 - 1] << " ";
    }

    // std::cout << "flag\n";

    for(int i = 1; i < n - k + 1; i++) {
        
        //iter = digits.begin();
        //iter = digits.find(data[i - 1]); // aqui que fode
        //cout << "iter: " << *iter << "\n"; 
        digits.pop_front();
        //cout << "data[i + k]:  " << data[i + k - 1] << "\n"; 
        digits.push_front(data[i + k - 1]);

        sorted_digits = digits;
        sort(sorted_digits.begin(), sorted_digits.end());


        iter = sorted_digits.begin();

        cout << "window: ";
    
        for(int l = 0; l < k; l++) {
            cout << *iter;
            advance(iter, 1);
        }
        cout << "\n";

        cout << "digits size: " << digits.size() << "\n";

        
        if (digits.size() % 2 != 0) {
            //advance(iter, digits.size()/ 2);
            cout << sorted_digits[digits.size()/ 2] << " ";
        } else {
            // float median = 0;
            // advance(iter, digits.size()/2 - 1);
            // cout << *iter << " ";
            cout << sorted_digits[digits.size()/ 2 - 1] << " ";
        }

    }
    cout << "\n";
}

