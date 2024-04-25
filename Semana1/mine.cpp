#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
	int n;
	cin >> n;
	
	int bombs[n + 2];
	bombs[0] = 0;
	bombs[n + 1] = 0;
	
	for (int i = 1; i < n + 1; i++) {
		cin >> bombs[i];
	}
	
	for (int i = 1; i < n + 1; i++) {
		cout <<  bombs[i - 1] + bombs[i] + bombs[i + 1] << "\n";
	}
	

    return 0;
}
