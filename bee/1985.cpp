#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int, double> valores = {
        {1001, 1.50},
        {1002, 2.50},
        {1003, 3.50},
        {1004, 4.50},
        {1005, 5.50}};
    int quantidadeItens{}, itemAtual{}, quantidadeAtual{};
    double valorFinal{};
    cin >> quantidadeItens;
    while (quantidadeItens--) {
        cin >> itemAtual >> quantidadeAtual;
        valorFinal += valores[itemAtual] * quantidadeAtual;
    }
    cout << fixed << setprecision(2) << valorFinal << endl;
}