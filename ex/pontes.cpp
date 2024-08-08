#include <bits/stdc++.h>

using namespace std;

int main(void) {
  vector<set<int> > pontes(100010);
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int t, a, b;
    cin >> t >> a >> b;

    if (t) {
      pontes[a].insert(b);
      pontes[b].insert(a);
    } else {
      if (pontes[a].find(b) != pontes[a].end() ||
          pontes[b].find(a) != pontes[b].end()) {
        printf("1\n");
      } else {
        printf("0\n");
      }
    }
  }
}
