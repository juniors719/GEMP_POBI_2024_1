#include <iostream>
using namespace std;
int main() {
    int n{}, menor_indice{}, menor_valor{21}, leitura{};
    cin >> n;
    for (size_t i = 1; i <= n; i++) {
        cin >> leitura;
        if (leitura < menor_valor) {
            menor_indice = i;
            menor_valor = leitura;
        }
    }
    cout << menor_indice << endl;
}