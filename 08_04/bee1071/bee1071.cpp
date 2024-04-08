#include <iostream>
using namespace std;

int main() {
    // Leitura das variáveis e instância da variável acumuladora do resultado.
    int x, y, result{};
    cin >> x >> y;

    // Se o valor de y for menor que o de x, trocamos o valor das duas variáveis.
    // Assim garantimos que o valor de x sempre será menor.
    if (x > y) swap(x, y);

    // Percorremos um loop iniciando em x+1 até o y-1, e se for ímpar, é somado na variável acumuladora.
    for (int i = x + 1; i < y; i++)
        if (i % 2 != 0) result += i;

    cout << result << endl;
    return 0;
}