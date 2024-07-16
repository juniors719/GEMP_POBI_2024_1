#include <bits/stdc++.h>
using namespace std;
int main() {
    string leitura;
    cin >> leitura;
    int p = leitura.size() - 1;
    while (p >= 0) {
        cout << leitura[p--];
    }
    cout << endl;
}