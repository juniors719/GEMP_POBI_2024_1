#include <iostream>
#include <stack>

using namespace std;

int main() {
    int qtd_linhas;
    cin >> qtd_linhas;
    stack<char> pilha_chaves;
    bool balanceada = true;
    cin.ignore();

    for (int i = 0; i < qtd_linhas; i++) {
        string linha;
        getline(cin, linha);
        for (char c : linha) {
            if (c == '{') {
                pilha_chaves.push(c);
            } else if (c == '}') {
                if (pilha_chaves.empty()) {
                    balanceada = false;
                    break;
                }
                pilha_chaves.pop();
            }
        }
    }

    if (!pilha_chaves.empty()) balanceada = false;

    cout << (balanceada ? "S" : "N") << endl;
}