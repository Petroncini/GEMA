#include <iostream>

using namespace std;

int main() {
    int t;

    cin >> t;

    for (int j = 0; j < t; j++) {
        int n;

        cin >> n;

        char word[n];
        char answer[2*n];

        cin >> word;
        
        int i = n - 1;
        int ri = 0;

        while (i >= 0) {
            

            if (word[i] == 'b' || word[i] == 'c' || word[i] == 'd') {
                answer[ri] = word[i];
                answer[ri + 1] = word[i - 1];
                answer[ri + 2] = word[i - 2];
                answer[ri + 3] = '.';

                ri += 4;
                i -= 3;

            } else {
                answer[ri] = word[i];
                answer[ri + 1] = word[i - 1];
                answer[ri + 2] = '.';

                ri += 3;
                i -= 2;
            }

        }

        for (int k = ri - 2; k >= 0; k--) {
            cout << answer[k];
        }

        cout << "\n";

    }
}