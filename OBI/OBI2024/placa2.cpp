#include <bits/stdc++.h>

using namespace std;

int main(void){
    vector<char> placa(11);

    for (int i = 0; i < n; i++)
    {
        cin >> placa[i];
    }
    
    if(placa.size() != 7 && placa.size() != 8){
        printf("flag\n");
        cout << 0 << "\n";
        return 0;
    }

    for (int i = 0; i < 3; i++)
    {
        if(placa[i] < 'A' || placa[i] > 'Z'){
            
            cout << 0 << "\n";
            return 0;
        }
    }

    if(placa.size() == 8){
        
        if(placa[3] != '-'){
            cout << 0 << "\n";
            return 0;
        }

        for (int i = 0; i < 3; i++)
        {
            if(placa[i] < '0' || placa[i] > '9'){
                cout << 0 << "\n";
                return 0;
            }
        }
        cout << 1 << "\n";
        return 0;
    }
    

}