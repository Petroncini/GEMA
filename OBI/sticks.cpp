#include <bits/stdc++.h>

using namespace std;

long long int perm(long long int over, int m);

int32_t main(void){
    int n, m;

    cin >> n >> m;

    long long int over = (3 * m) - n;
    cout << "over: " << over << "\n"; 

    if(over < 0){
        cout << 0 << "\n";
        return 0; 
    }







    long long int perms;
    long long int illegal_perms_1 = 0;
    long long int illegal_perms_2 = 0;
    long long int illegal_perms_3 = 0;

    perms = perm(over, m);

    if (over > m - 1){
        illegal_perms_1 = 3*perm(over - m, m);
    }

    if (over > 2*m - 1) {
        illegal_perms_2 = 3*perm(over - 2*m, m);
    } 

    if (over > 3*m - 1) {
        illegal_perms_2 = perm(over-3*m, m);
    } 

    printf("perm: %lli\n", perms);
    printf("Illegal1: %lli\n", illegal_perms_1);
    printf("Illegal2: %lli\n", illegal_perms_2);
    printf("Illegal3: %lli\n", illegal_perms_3);
    printf("%lli\n", perms -  illegal_perms_1 - illegal_perms_2 - illegal_perms_3);
}


long long int perm(long long int over, int m){

   
    if (over%2 == 0){
        return ((over + 2)/2)   *    ((over + 1));
    } else {
        return ((over + 2))   *    ((over + 1)/2);
    }
}