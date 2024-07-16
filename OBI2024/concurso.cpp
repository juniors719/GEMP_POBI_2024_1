#include <bits/stdc++.h>
using namespace std;
int main() {
    int quantidade_notas{}, numero_vagas{};
    cin >> quantidade_notas >> numero_vagas;
    vector<int> notas(quantidade_notas);
    for (int i = 0; i < quantidade_notas; i++) {
        cin >> notas[i];
    }
    sort(notas.begin(), notas.end());
    cout << notas[quantidade_notas - numero_vagas] << endl;
}