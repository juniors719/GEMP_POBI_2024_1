#include <bits/stdc++.h>
using namespace std;

int main() {
    int quant_superm;
    cin >> quant_superm;
    vector<double> variedade_precos;

    while (quant_superm--) {
        double preco;
        int gramas;
        cin >> preco >> gramas;
        double kilo = (preco / (double)gramas) * 1000.0;
        variedade_precos.push_back(kilo);
    }
    sort(variedade_precos.begin(), variedade_precos.end());
    cout << fixed << setprecision(2) << variedade_precos.front() << endl;
}