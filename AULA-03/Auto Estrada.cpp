#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, paineis = 0;
    string estrada;
    cin >> n >> estrada;
    for (int i = 0; i < n; i++){
        if (estrada[i] == 'P' or estrada[i] == 'C') paineis += 2;
        else if (estrada[i] == 'A') paineis++;
    }
    cout << paineis << endl;
    return 0;
}