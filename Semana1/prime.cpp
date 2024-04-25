#include <iostream>

using namespace std;

bool eh_primo(int x){
	//Seu código aqui.
	int div_count = 0;
	
	for (int i = 0; i <= x; i++){
		if(x%i == 0) {
			div_count++;
		}
	}
	
	if(div_count == 2) {
		return true;
	} else {
		return false;
	}
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
