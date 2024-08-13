#include <bits/stdc++.h>
using namespace std;
// >>> entrada
// 3
// <<< saída
// 1 1 1
// 1 2 1
// 1 1 1

// >>> entrada
// 4
// <<< saída
// 1 1 1 1
// 1 2 2 1
// 1 2 2 1
// 1 1 1 1

void print_matriz(vector<vector<int>> &matriz) {
    for (auto &linha : matriz) {
        for (auto &elem : linha) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> piramide(n, vector<int>(n, 0));

    for (int camada = 0; camada < n; camada++) {
        int limite_inferior = camada;      // o limite inferior é a camada atual
        int limite_superior = n - camada;  // o limite superior é o tamanho da pirâmide menos a camada atual
        for (int i = limite_inferior; i < limite_superior; i++) {
            for (int j = limite_inferior; j < limite_superior; j++) {
                piramide[i][j] = camada + 1;
            }
        }
    }

    print_matriz(piramide);
}