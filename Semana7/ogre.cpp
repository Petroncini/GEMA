#include <iostream>

using namespace std;

int binary_search(int start, int stop, int target, int *ranges);

int main(void) {
    int n, m;

    cin >> n >> m;
    
    int ranges[n];
    int prizes[n + 1];
    int ogres[m];


    for (int i = 0; i < n - 1; i++)
    {
        cin >> ranges[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> prizes[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> ogres[i];
    }
    

    for (int i = 0; i < n - 1; i++)
    {
        cout << ranges[i];
    }


    int in;

    cin >> in;

    cout << in << " flag\n";

    cout << binary_search(0, n - 2, in, ranges) << "\n";
    
    
}

int binary_search(int start, int stop, int target, int *ranges) {
    int middle = start + ((stop-start)/2);
    int middle_val = ranges[middle];

    printf("Start: %i, middle, %i, stop: %i, val: %i, target: %i\n", start, middle, stop, middle_val, target);
    
    if(target > middle_val) {
        binary_search(middle + 1, stop, target, ranges);
    } else if(target < middle_val) {
        binary_search(start, middle, target, ranges);
    } else if(middle_val == target){
        return middle;
    } 


    return -1;
}

