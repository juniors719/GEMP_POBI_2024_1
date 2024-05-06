#include <iostream>
#include <stack>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        stack<char> pilha;
        string leitura;
        cin >> leitura;
        bool balanceada = true;
        for (char c : leitura) {
            if (c == '(' ||
                c == '[' ||
                c == '{') {
                pilha.push(c);
            } else {
                if (pilha.empty()) {
                    balanceada = false;
                    break;
                }
                char topo = pilha.top();
                pilha.pop();
                if ((c == ')' && topo != '(') ||
                    (c == ']' && topo != '[') ||
                    (c == '}' && topo != '{')) {
                    balanceada = false;
                    break;
                }
            }
        }
        if (!pilha.empty()) balanceada = false;
        cout << (balanceada ? "S" : "N") << endl;
    }
}