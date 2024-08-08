#include <bits/stdc++.h>

using namespace std;

int main(void){
    string code;
    string input;
    int n;
    cin >> n;

    stack<char> brackets;

    for (int i = 0; i < n + 1; i++)
    {
        // printf("i: %i\n", i);
        getline(cin, input);
        // cout << "input: " << input << "\n";
        code += input;
    }
    //cout << "code : \n" << code << "\n";
    for (int i = 0; i < code.size(); i++)
    {
        
        char curr = code[i];

        if(curr == '{'){
            // printf("Open\n");
            brackets.push(curr);

        } else if(curr == '}'){
            if(brackets.size() > 0){
                brackets.pop();

            } else {
                cout << "N\n";
                return 0;

            }
        }

    }

    if(brackets.size() == 0){
        cout << "S\n";
    } else {
        cout << "N\n";
    }
    
    
}