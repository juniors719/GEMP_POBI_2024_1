#include <bits/stdc++.h>
using namespace std;
int main() {
    string N1, N2;
    int qtdSubsequencias{}, lastPos{}, counterCasos{1};

    while (cin >> N1 >> N2) {
        qtdSubsequencias = 0;
        lastPos = 0;
        for (int i = 0; i < N2.size(); i++) {
            string subN1 = N2.substr(i, N1.size());
            if (subN1 == N1) {
                qtdSubsequencias++;
                lastPos = i + 1;
            }
        }
        cout << "Caso #" << counterCasos << ":\n";
        if (qtdSubsequencias) {
            cout << "Qtd.Subsequencias: " << qtdSubsequencias << endl;
            cout << "Pos: " << lastPos << endl;
        } else {
            cout << "Nao existe subsequencia\n";
        }
        cout << endl;
        counterCasos++;
    }
}