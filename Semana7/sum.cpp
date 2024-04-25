#include <iostream>

using namespace std;
#define int long long int

int32_t main(void){
    int n, q, a, b, sum;
    sum = 0;
    cin >> n >> q;
    int arr[n];
    int arr_sum[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        arr_sum[i] = sum;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%i: %i, ", arr[i], arr_sum[i]);
    // }
    // cout << "\n";
    

    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;

        //printf("a - 2: %i, b - 1: %i, arr_sum[b - 1]: %i, arr_sum[a - 2]: %i\n", a - 2, b - 1, arr_sum[b - 1], arr_sum[a - 2]);
        if (a - 2 < 0){
            cout << arr_sum[b - 1] << "\n";
        } else {
            cout << arr_sum[b - 1] - arr_sum[a - 2] << "\n";
        }
    }
    
    
}
