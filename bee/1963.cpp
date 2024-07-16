#include <bits/stdc++.h>
using namespace std;
int main() {
    double valorA, valorB, porcentagem;
    cin >> valorA >> valorB;
    porcentagem = ((valorB - valorA) / valorA) * 100;
    cout << fixed << setprecision(2) << porcentagem << "%\n";
}