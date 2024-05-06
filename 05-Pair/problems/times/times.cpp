#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int qtd_jogadores, qtd_times;
    cin >> qtd_jogadores >> qtd_times;
    vector<pair<string, int>> jogadores;
    for (int i = 0; i < qtd_jogadores; i++) {
        string nome;
        int habilidade;
        cin >> nome >> habilidade;
        jogadores.push_back(make_pair(nome, habilidade));
    }

    // jogadores.begin() e jogadores.end() são usados para especificar o intervalo que queremos ordenar.
    // Neste caso, estamos ordenando todo o contêiner jogadores.

    // O terceiro argumento para a função sort é uma função lambda.
    // As funções lambda são funções anônimas que você pode usar no local.
    // Esta função lambda em particular recebe dois pares (cada par consiste em uma string e um inteiro)
    // e retorna true se o segundo elemento do primeiro par for maior que o segundo elemento do segundo par.
    // Isso significa que estamos ordenando os jogadores em ordem decrescente com base no segundo elemento de cada par.

    // Em resumo, este código ordena o vetor de pares jogadores em ordem decrescente com base no segundo elemento de cada par.

    sort(jogadores.begin(), jogadores.end(), [](pair<string, int> a, pair<string, int> b) {
        return a.second > b.second;
    });
    vector<vector<string>> times(qtd_times);
    for (int i = 0; i < qtd_jogadores; i++) {
        times[i % qtd_times].push_back(jogadores[i].first);
    }
    for (int i = 0; i < qtd_times; i++) {
        sort(times[i].begin(), times[i].end());
        cout << "Time " << i + 1 << endl;
        for (int j = 0; j < times[i].size(); j++) {
            cout << times[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}