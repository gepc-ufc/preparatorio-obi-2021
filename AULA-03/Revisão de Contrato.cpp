#include <bits/stdc++.h>

using namespace std;

int main(){
    char digito;
    string numero, nova;
    cin >> digito >> numero;
    while (digito != '0' and numero != "0"){
        nova = "";
        for (int i = 0; i < numero.size(); i++){
            if (numero[i] != digito) nova += numero[i];
        }
        bool imprimir = false;
        for (int i = 0; i < nova.size(); i++){
            if (nova[i] != '0') imprimir = true;
            if (imprimir) cout << nova[i];
        }
        if (!imprimir) cout << 0;
        
        cout << endl;
    
        cin >> digito >> numero;
    }
    return 0;
}