#include <bits/stdc++.h>

using namespace std;

int n;
char m[110][110];

int main() {
  cin >> n;

  if (n % 2 == 0) {
    cout << "Mallard triste" << endl;
    return 0;
  }

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      m[i][j] = '.';
    }
  }

  int meio = n / 2 + 1;
  m[meio][meio] = '#';

  for (int i = 1; i <= n; i++) {
    if (i == meio || i + 1 == meio || i - 1 == meio) continue;
    m[i][meio + 1] = '#';
    m[i][meio - 1] = '#';
  }

  for (int i = 1; i <= n; i++) {
    if (i == meio || i + 1 == meio || i - 1 == meio) continue;
    m[meio + 1][i] = '#';
    m[meio - 1][i] = '#';
  }

  for (int i = 1; i <= n; i++) {
    if (i == meio || i + 1 == meio || i - 1 == meio) continue;
    m[i][i + 1] = '#';
    m[i][i - 1] = '#';
  }

  for (int i = 1; i <= n; i++) {
    if (i == meio || i + 1 == meio || i - 1 == meio) continue;
    m[n - i + 1][i + 1] = '#';
    m[n - i + 1][i - 1] = '#';
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

