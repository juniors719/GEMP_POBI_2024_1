#include <iomanip>
#include <iostream>
using namespace std;

double calcMedia(double nota1, double nota2) {
    return (nota1 + nota2) / 2;
}

int main() {
    int nValidas{};
    double notas[2]{0, 0};
    double leitura;
    while (true) {
        while (nValidas < 2) {
            cin >> leitura;
            if (leitura >= 0 && leitura <= 10) {
                if (nValidas == 0) {
                    notas[0] = leitura;
                } else {
                    notas[1] = leitura;
                }
                nValidas++;
            } else {
                cout << "nota invalida\n";
            }
        }
        cout << fixed << setprecision(2) << "media = " << calcMedia(notas[0], notas[1]) << endl;

        int opc{};
        while (opc != 1 && opc != 2) {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> opc;
        }
        if (opc == 2) break;
        nValidas = 0;
    }
}