#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int vet[1000000];

    for (int i = 1; i < n + 1; i++)
    {
        vet[i] = i;
    }
    
    int j;
    if(n %2 == 0){
        j = 2;
    } else {
        j = 1;
    }
    int prev = -1;
    int sol[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(vet[j] == prev){
            printf("NO SOLUTION\n");
            return 0;
        }
        if(vet[j] != -1){
            sol[i] = vet[j];

            if(abs(vet[j] - prev) < 2){
                prev = vet[j];

                j++;
                if(j > n){
                    j = j - n;
                }

                i--;
                count++;
                continue;
            }

            count = 0;
            prev = vet[j];
            vet[j] = -1;

            j += 2;
            if(j > n){
                j = j - n;
            }
            continue;
        } else {
            j++;
            if(j > n){
                j = j - n;
            }
            i--;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%i ", sol[i]);
    }
    printf("\n");
}