#include <bits/stdc++.h>
using namespace std;

int main() {
    int comprimento_estrada, quantidade_cidades;
    cin >> comprimento_estrada >> quantidade_cidades;

    vector<int> cidades(quantidade_cidades);
    for (int i = 0; i < quantidade_cidades; i++) {
        cin >> cidades[i];
    }

    sort(cidades.begin(), cidades.end());

    double menor_vizinhanca = numeric_limits<double>::max();

    for (int i = 0; i < quantidade_cidades - 1; i++) {
        double fronteira = (cidades[i] + cidades[i + 1]) / 2.0;
        if (i == 0) {
            menor_vizinhanca = fronteira;
        } else {
            double vizinhanca = fronteira - (cidades[i - 1] + cidades[i]) / 2.0;
            menor_vizinhanca = min(menor_vizinhanca, vizinhanca);
        }
    }

    menor_vizinhanca = min(menor_vizinhanca, (double)comprimento_estrada - (cidades[quantidade_cidades - 2] + cidades[quantidade_cidades - 1]) / 2.0);

    cout << fixed << setprecision(2) << menor_vizinhanca << endl;

    return 0;
}
