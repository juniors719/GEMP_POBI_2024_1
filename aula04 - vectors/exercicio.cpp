#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, num_colunas{};
    cin >> n;

    int num_colunas = (n % 2 == 0) ? 2 : 3;

    int numero_linhas = ceil(n / num_colunas);  // função teto
    int numeros[numero_linhas][num_colunas];

    for (int i = 0; i < n; i++) {
        cin >> numeros[i / num_colunas][i % num_colunas];
    }

    cout << numeros[0][0] << endl;
    cout << numeros[1][1] << endl;
}