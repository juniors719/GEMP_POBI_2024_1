#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, cotnadorCasos{1};
    while (cin >> n) {
        // formula soma PA
        int soma = (n * (n + 1) / 2) + 1;
        cout << "Caso " << cotnadorCasos++ << ": " << soma << " numero" << (soma > 1 ? "s" : "") << endl;
        cout << "0";
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                cout << " " << i;
            }
        }
        cout << endl
             << endl;
    }
}