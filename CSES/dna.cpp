#include <bits/stdc++.h>

using namespace std;

int main(void){
    char curr = ' ';
    int longest = 0;
    int count = 0;

    char* input = (char*) malloc(10e6);
    fgets(input, 10e6, stdin);
    
    int i = 0;
    char base = input[i];
    curr = base;

    while(base != '\n'){
        if (base != curr){
            curr = base;
            count = 1;
            base = input[++i];
            continue;
        }

        count++;
        if (count > longest){
            longest = count;
        }
        base = input[++i];
    }

    cout << longest << "\n";
}