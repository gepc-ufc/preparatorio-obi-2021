#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int peca[6];

  for (int i = 0; i < 6; i++) {
    peca[i] = 0;
  }

  int ma = 0, mb = 0, mc = 0;

  int atual;
  for (int i = 0; i < n; i++) {
    cin >> atual;

    peca[atual]++;

    if (peca[1] > 0 && peca[5] > 0 && peca[3] > 0) {
      ma++;

      peca[1]--;
      peca[5]--;
      peca[3]--;
    } else if (peca[1] > 0 && peca[4] > 0) {
      mb++;

      peca[1]--;
      peca[4]--;
    } else if (peca[2] > 0 && peca[4] > 0) {
      mc++;

      peca[2]--;
      peca[4]--;
    }
  }

  // A: 1
  // B: 1
  // C: 1

  cout << "A: " << ma << endl;
  cout << "B: " << mb << endl;
  cout << "C: " << mc << endl;

  return 0;
}
