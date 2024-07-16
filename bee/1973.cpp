#include <bits/stdc++.h>
using namespace std;

int main() {
    int numeroEstrelas{}, estrelasRoubadas{}, aux{}, carneinosNaoRoubados{};

    cin >> numeroEstrelas;
    vector<int> estrelas(numeroEstrelas);

    for (int i = 0; i < numeroEstrelas; i++) {
        cin >> estrelas[i];
    }
    short paridadePrimeiraEstrela = estrelas[0] % 2;
    int estrelaatual = 0;
    while (true) {
        // primeiro rouba da estrela atual
        if (estrelas[estrelaatual] > 0) {
            cout << "Estrela roubada na posição " << estrelaatual << " com valor " << estrelas[estrelaatual] << "\n";
            estrelas[estrelaatual]--;
            estrelasRoubadas++;
            cout << "Valores após roubo: ";
            for (auto i : estrelas) {
                cout << i << " ";
            }
            cout << endl;
        } else
            break;

        // verifica se pode continuar
        if (estrelaatual < numeroEstrelas - 1 && estrelas[estrelaatual + 1] % 2 == paridadePrimeiraEstrela)
            estrelaatual++;
        else if (estrelaatual > 0 && estrelas[estrelaatual - 1] % 2 == paridadePrimeiraEstrela)
            estrelaatual--;
        else
            break;
    }
    for (auto i : estrelas) {
        carneinosNaoRoubados += i;
    }
    cout << estrelasRoubadas << " " << carneinosNaoRoubados << endl;
}