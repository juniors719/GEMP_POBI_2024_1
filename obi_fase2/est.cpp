#include <bits/stdc++.h>
using namespace std;

int main() {
    int comprimento_estrada, quant_cidades;
    cin >> comprimento_estrada >> quant_cidades;

    vector<int> cidades(quant_cidades);

    for (int i = 0; i < quant_cidades; i++) cin >> cidades[i];

    sort(cidades.begin(), cidades.end());

    double menor_vizinhanca = numeric_limits<double>::max(), ultima_fronteira = 0;

    for (int i = 0; i < quant_cidades - 1; i++) {
        double fronteira = (cidades[i] + cidades[i + 1]) / 2.0;
        double vizinhanca = fronteira - ultima_fronteira;
        menor_vizinhanca = min(menor_vizinhanca, vizinhanca);
        ultima_fronteira = fronteira;
    }

    double last = comprimento_estrada - ultima_fronteira;
    menor_vizinhanca = min(menor_vizinhanca, last);

    cout << fixed << setprecision(2) << menor_vizinhanca << endl;
}