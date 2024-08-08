#include <bits/stdc++.h>



void mercosul(char *placa, int len);



using namespace std;

int main(void){
    char placa[11];
    
    cin >> placa;

    int len = strlen(placa);

   
    
    

    if(len != 8 && len != 7){
        cout << 0 << "\n";
        return 0;
    }

    for (int i = 0; i < 3; i++){
        
        if((placa[i] < 'A' || placa[i] > 'Z')){
            
            cout << 0 << "\n";
            return 0;
        }
    }

    
    

    if(len == 8){
        if(placa[3] != '-'){
            cout << 0 << "\n";
            return 0;
        }
        

        for (int i = 5; i < 9; i++) {
            
            if(placa[i] < '0' || placa[i] > '9'){
        
                cout << 0 << "\n";
                return 0;
            }
        }
    
        cout << 1 << "\n";
        return 0;

    } else {
        mercosul(placa, len);
    }

    return 0;
}



void mercosul(char *placa, int len){
    if((placa[3] < '0' || placa[3] > '9')){
        cout << 0 << "\n";
        return;
    }

    if((placa[4] < 'A' || placa[4] > 'Z')){
        cout << 0 << "\n";
        return;
    }

    for (int i = 6; i < 8; i++)
    {
        if((placa[i] < '0' || placa[i] > '9')){
            cout << 0 << "\n";
            return;
        }
    }

    cout << 2 << "\n";
    return;
}