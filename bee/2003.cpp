#include <bits/stdc++.h>
using namespace std;
int main() {
    istringstream ss;
    string linha;
    int h, m;
    while (getline(cin, linha)) {
        ss.str(linha);
        ss >> h;
        ss.ignore();
        ss >> m;
        ss.clear();
        if (h < 7)
            cout << "Atraso maximo: 0\n";
        else
            cout << "Atraso maximo: " << (h - 7) * 60 + m << endl;
    }
}