#include <bits/stdc++.h>
using namespace std;

int main() {
    int quant_comp, quant_vagas, quant_classificados;
    cin >> quant_comp >> quant_vagas;

    quant_classificados = quant_vagas;

    vector<int> notas(quant_comp);

    for (int i = 0; i < quant_comp; i++) {
        cin >> notas[i];
    }

    sort(notas.begin(), notas.end(), greater<int>());

    int it = quant_vagas;
    while (notas[it] == notas[quant_vagas - 1]) {
        it++;
        quant_classificados++;
    }

    cout << quant_classificados << endl;
}