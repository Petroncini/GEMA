#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;

lli n, p[30];
lli ans = 1e18;
void backtrack(int i, lli sum1, lli sum2);

int main(void) {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  backtrack(0, 0, 0);
}

void backtrack(int i, lli sum1, lli sum2) {
  if (i == n) {
    ans = min(ans, abs(sum1 - sum2));
    return;
  }

  backtrack(i + 1, sum1 + p[i], sum2);
  backtrack(i + 1, sum1, sum2 + p[i]);
}
