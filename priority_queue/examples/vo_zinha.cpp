#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numero_caracteres_senha, quant_caracteres_faltando, quant_opcoes, possibilidade;
    cin >> numero_caracteres_senha >> quant_caracteres_faltando >> quant_opcoes;
    vector<string> opcoes_possiveis(quant_caracteres_faltando);
    string senha;
    cin >> senha;

    for (int i = 0; i < quant_caracteres_faltando; i++) {
        cin >> opcoes_possiveis[i];
    }

    for (string& opcao : opcoes_possiveis) {
        sort(opcao.begin(), opcao.end());
    }

    cin >> possibilidade;

    vector<int> opcoes(quant_caracteres_faltando);

    possibilidade--;
    for (int i = quant_caracteres_faltando - 1; i >= 0; i--) {
        int resto = possibilidade % quant_opcoes;
        possibilidade /= quant_opcoes;
        opcoes[i] = resto;
    }

    int p = 0;
    for (char c : senha) {
        if (c != '#')
            cout << c;
        else {
            cout << opcoes_possiveis[p][opcoes[p++]];
        }
    }
    cout << endl;
}
