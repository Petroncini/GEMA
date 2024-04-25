#include <iostream>
#include <string>

using namespace std;

int main () {
    int t;
    cin >> t;

    int answers[t];

    for (int j = 0; j < t; j++) {

        int n;

        cin >> n;

        char a[n + 1], b[n + 1], c[n + 1];

        cin >> a >> b >> c;

        bool match = true;
        bool exclusive = false;
        bool different = false;

        for (int i = 0; i < n; i++) {
            char ca = a[i];
            char cb = b[i];
            char cc = c[i];

            // if (ca == cc || cb == cc)
            // {
            //     if (ca != cb) {
            //         match = false;
            //     }
            // }

            if (ca == cb) {
                if (ca != cc) {
                    exclusive = true;
                }
            }

            if (ca != cb && cb != cc && ca != cc) {
                different = true;
            }
        }

        // cout << "match: " << match << ", exclusive: " << exclusive << ", differente: " << different << "\n";
        if (exclusive || different) {
            answers[j] = 1;
        } else {
            answers[j] = 0;
            
        }
    }

    for (int i = 0; i < t; i++) {
        if (answers[i] == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}