#include <iostream>

using namespace std;

int main (){
    int testcases;
    cin >> testcases;
    int rating;
    int division;

    for (int i = 0; i < testcases; i++){
        cin >> rating;
        if (1900 <= rating) {
            division = 1;
        } else if (1600 <= rating && rating <= 1899) {
            division = 2;
        } else if (1400 <= rating && rating <= 1599) {
            division = 3;
        } else if (rating <= 1399) {
            division = 4;
        }

        cout << "Division " << division << "\n";
    }
}