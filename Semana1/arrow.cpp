#include <iostream>
#include <string>

using namespace std;

int main () {
    string arrow;

    cin >> arrow;

    int len = arrow.length();

    int k = 0;

    if (arrow[0] != '<') {
        cout << "No\n";
        exit(0);
    }

    for (int i = 1; i < len; i++){
        if (arrow[i] == '<') {
            cout << "No\n";
            exit(0);
        }
        
        if (arrow[i] == '>' && i != len - 1) {
            cout << "No\n";
            exit(0);
        }

        if (arrow[i] == '=') {
            k++;
        }
    }

    if (k == 0) {
        cout << "No\n";
        exit(0);
    }

    if (len != k + 2) {
        cout << "No\n";
        exit(0);
    }

    cout << "Yes\n";


}