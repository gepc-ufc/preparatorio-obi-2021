#include <bits/stdc++.h>

using namespace std;

int n, c;

int v[1010];

int main() {
  cin >> n >> c;

  int p, inf, xi;
  for (int i = 0; i < c; i++) {
    cin >> p >> inf;

    for (int j = 0; j < inf; j++) {
      cin >> xi;
      v[xi] = p;
    }
  }

  for (int i = 1; i <= n; i++) {
    if (!v[i]) cout << i << endl;
  }

  return 0;
}