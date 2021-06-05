#include <bits/stdc++.h> 

using namespace std;

int f, n;
char mapa[550][550];
int mx[] = {0, -1, 0, 1};
int my[] = {-1, 0, 1, 0};

void solve(int i, int j){
    if (i < 0 || i >= n || j < 0 || j >= n) return;
    if (mapa[i][j] == '*') return;
    if ((mapa[i][j] - '0') <= f) mapa[i][j] = '*';
    else return;
    for (int k = 0; k < 4; k++){
        solve(i + mx[k], j + my[k]);
    }
}

int main(void){
    cin >> n >> f;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mapa[i][j];
        }
    }
    solve(0, 0);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << mapa[i][j];
        }
        cout << endl;
    }
    return 0;
}