#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;

lli n, p[30];
lli ans = 1e18;

int main(void) {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  for (int mask = 0; mask < (1 << n); mask++) {
    lli sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++) {
      int bit = (mask & (1 << i));
      if (bit) {
        sum1 += p[i];
      } else {
        sum2 += p[i];
      }
    }

    ans = min(ans, abs(sum1 - sum2));
  }

  cout << ans << "\n";
}
