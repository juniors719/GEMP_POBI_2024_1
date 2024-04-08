#include <iostream>
using namespace std;

int somaImparesConsecutivos(int x, int y) {
    int result{};

    // Se o valor de y for menor que o de x, trocamos o valor das duas variáveis.
    // Assim garantimos que o valor de x sempre será menor.
    if (x > y) swap(x, y);

    // Percorremos um loop iniciando em x+1 até o y-1, e se for ímpar, é somado na variável acumuladora.
    for (int i = x + 1; i < y; i++)
        if (i % 2 != 0) result += i;

    return result;
}

int main() {
    int n{}, x{}, y{};
    cin >> n;

    while (n--) {
        cin >> x >> y;
        cout << somaImparesConsecutivos(x, y) << endl;
    }

    return 0;
}