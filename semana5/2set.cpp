#include <iostream>
#include <set>

using namespace std;

#define int long long int

signed main(void){
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    

    if(sum%2 == 1) {
        printf("NO\n");
        return 0;
    }

    cout << "YES\n"; 
    
    set<int> first;
    set<int> second;
    int first_size = 0;
    int second_size = n;

    for (int i = 1; i <= n; i++)
    {
        second.insert(i);
    }
    
    int remainder = sum/2;
    int include;

    //printf("sum: %lli", sum);

    while (remainder>0){

        if(remainder > n - first_size) {
            include = n - first_size;
        } else {
            include = remainder;
        }

        //printf("n-first_seize: %lli, remainder: %lli, include: %lli\n",n - first_size, remainder, include);
        remainder -= include;
        first.insert(include);
        second.erase(include);
        first_size++;
        second_size--;
    }

    cout << first_size << "\n";

    for(auto it = first.begin(); it != first.end(); it++){
        cout << *it << " ";
    }
    cout << "\n" << second_size << "\n";

    for(auto it = second.begin(); it != second.end(); it++){
        cout << *it << " ";
    }
    cout << "\n";
    


}