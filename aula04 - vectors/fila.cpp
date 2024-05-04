#include <iostream>
#include <vector>

using namespace std;

vector<int> fila;  // vector de int global - representa a fila

/**
 * Remove um elemento da "fila".
 *
 * @param p O elemento a ser removido.
 */
void remove(int& p) {
    for (int i = 0; i < fila.size(); ++i) {
        if (p == fila[i]) {
            fila.erase(fila.begin() + i);
            return;
        }
    }
}

int main() {
    int n{};  // quantidade de pessoas inicialmente na fila
    cin >> n;

    int aux{};

    // leitura da fila
    while (n--) {
        cin >> aux;
        fila.push_back(aux);
    }

    int m{};  // quantidade de pessoas que deixaram a fila
    cin >> m;

    // leitura dos identificadores das pessoas que saíram da fila
    while (m--) {
        cin >> aux;
        remove(aux);  // chama a função remove, passando o identificador
    }

    // imprime a fila após a execução do programa
    for (int i = 0; i < fila.size() - 1; ++i) {
        cout << fila[i] << " ";
    }
    cout << fila.at(fila.size() - 1) << endl;
}