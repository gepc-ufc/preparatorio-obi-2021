#include <bits/stdc++.h>

using namespace std;

int main() {
  int maior = 0;
  int x;

  cin >> x;
  while (x != 0) {
    if (x > maior) {
      maior = x;
    }

    cin >> x;
  }

  cout << maior << endl;

  return 0;
}
