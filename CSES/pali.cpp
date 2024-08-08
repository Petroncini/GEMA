#include <bits/stdc++.h>

using namespace std;

int main(void){
    vector<int> letters(27, 0);
    vector<char> word;
    int wordlen = 0;

    string input;
    getline(cin, input);  // read the entire line as input

    for(int i = 0; i < input.length(); i++){
        char in = input[i];
        word.push_back(in);
        wordlen++;
    }

    int odds = 0;
    int odd = 0;
    int mask = 0;


    for (int i = 0; i < wordlen; i++)
    {
        letters[word[i] - 'A']++;
        mask ^= (1 <<(word[i] - 'A'));
        if(letters[word[i] - 'A'] %2 == 1){
            odds++;
        } else {
            odds--;
        }
    }
    

    if(((wordlen%2==0) && odds != 0) || ((wordlen%2==1) && odds != 1)){
        printf("NO SOLUTION\n");
        return 0;
    }
    if(odds == 1){
        while (mask > 0) {
            if (mask & 1) {
                break;
            }
            odd++;
            mask >>= 1;
        }
    } else {
        odd = -1;
    }
    
    //printf("odd : %i | %c\n", odd, 'A' + odd);
    stack<char> sta;
    for (int i = 0; i < 27; i++)
    {
        //printf("\n%c: %i\n", 'A' + i, letters[i]);
        if (i == odd || letters[i] == 0){
            continue;
        }
        //printf("\n%c: %i\n", 'A' + i, letters[i]);
        for (int j = 0; j < letters[i]/2; j++)
        {
            
            printf("%c", 'A'+i);
            sta.push('A' + i);
        }
    }

    if(odds == 1){
        
        for (int i = 0; i < letters[odd]; i++)
        {
            printf("%c", 'A' + odd);
        }
        
    }

    while(!sta.empty()){
        printf("%c", sta.top());
        sta.pop();
    }
    
    
    printf("\n");
}