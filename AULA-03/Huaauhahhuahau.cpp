#include <bits/stdc++.h>

using namespace std;

bool check(char a){
    if (a == 'a' or a == 'e' or a == 'i' or a == 'o' or a == 'u') return true;
    return false;
}

int main(){
    string risada, vogais;
    cin >> risada;
    
    for (int i = 0; i < risada.size(); i++){
        if (check(risada[i])) vogais += risada[i];
    }

    for (int i = 0; i < vogais.size(); i++){
        if (vogais[i] != vogais[vogais.size() - 1 - i]){
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;

    return 0;
}