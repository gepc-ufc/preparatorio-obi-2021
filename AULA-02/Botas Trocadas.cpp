#include <bits/stdc++.h>

using namespace std;

int d[31];
int e[31];
int soma,n;

int main(){
    cin >> n;

    char lado;
    int tam;
    for(int i = 0; i < n; i++){
        cin >> tam >> lado;
        if(lado == 'D'){
            d[tam-30]++;
        }else{
            e[tam-30]++;
        } 
    }

    for(int i = 0; i <= 30; i++){
        soma += min(d[i],e[i]);
    }

    cout << soma << endl;

    return 0;
}