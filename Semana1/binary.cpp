#include <iostream>
#include <algorithm>


using namespace std;

long long int n;

int binary_search(long long int start, long long int stop, long long int target, long long int *arr);

// map

int main(void) {
	long long int q, s;

	cin >> n >> q;
    
	long long int list[n];

	for(long long int i = 0; i < n; i++) {
    	cin >> list[i];
	}

	for(long long int i = 0; i < q; i++) {
    	cin >> s;

        
    	cout << binary_search(0, n-1, s, list) << "\n";
	}
}


int binary_search(long long int start, long long int stop, long long int target, long long int *arr) {
	long long int middle = start + ((stop - start) / 2);

	if(start <= stop) {
		if (arr[middle] < target) {
			return binary_search(middle + 1, stop, target, arr);

		} else if(arr[middle] > target) {
			return binary_search(start, middle - 1, target, arr);

		} else if(start == middle){
			return middle;

		} else {
			return binary_search(start, middle, target, arr);

		}
	}
	
	return -1;
	
}


