#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, qtdAbas{};
    string leitura;
    cin >> qtdAbas >> n;
    while (n--) {
        cin >> leitura;
        if (leitura == "fechou")
            qtdAbas++;
        else
            qtdAbas--;
    }
    cout << qtdAbas << endl;
}