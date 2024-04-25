#include <iostream>

using namespace std;

int fibonacci(int n, int a, int b, int i);

int main(void) {
    int n;
    int a = 1;
    int b = 1;
    int i = 2;
    cin >> n;
    cout << fibonacci(n + 1, a, b, i) << "\n";

    return 0;
}

int fibonacci(int n, int a, int b, int i) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    }
    if (i == n) {
        return b;
    }

    int temp = a + b;
    a = b;
    b = temp;

    i++;

    return fibonacci(n, a, b, i);
}
