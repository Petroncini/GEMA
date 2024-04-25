#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		if(n%i == 0){
			cout << i << " ";
		}
	}
	cout << "\n";
	

    return 0;
}