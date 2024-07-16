#include <bits/stdc++.h>
using namespace std;

bool isMaiusculo(char& c) {
    return c >= 'A' || c <= 'Z';
}

bool isNumeric(char& c) {
    return c >= '0' || c <= '9';
}

bool verificaCaracteresIniciais(string& s) {
    for (int i = 0; i < 3; i++) {
        if (!isMaiusculo(s[i])) return false;
    }
    return true;
}

bool verificaNumerosAntigo(string& s) {
    for (int i = 4; i < 8; i++) {
        if (!isNumeric(s[i])) return false;
    }
    return true;
}

bool verificaFinalMercosul(string& s) {
    return isNumeric(s[3]) &&
           isMaiusculo(s[4]) &&
           isNumeric(s[5]) &&
           isNumeric(s[6]);
}

int main() {
    string placa;
    cin >> placa;
    int qtd_caract = placa.size();
    if ((qtd_caract == 7 || qtd_caract == 8) && verificaCaracteresIniciais(placa)) {
        if (qtd_caract == 8 && placa[3] == '-' && verificaNumerosAntigo(placa)) {
            cout << 1 << endl;
            return 0;
        }
        if (qtd_caract == 7 && verificaFinalMercosul(placa)) {
            cout << 2 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}