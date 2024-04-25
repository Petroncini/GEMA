#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
	int maior = 0;
	int n = 1;
	
	while (n != 0){
		cin << n;
		if (n > maior){
			maior = n;
		}
	}
	
	cout << n << "\n";
	
    return 0;
}
