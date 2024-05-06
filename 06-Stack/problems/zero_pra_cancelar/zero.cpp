#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, soma{}, leitura;
    stack<int> sequencia;
    cin >> n;
    while (n--) {
        cin >> leitura;
        if (leitura)
            sequencia.push(leitura);
        else if (!leitura && !sequencia.empty())
            sequencia.pop();
    }
    while (!sequencia.empty()) {
        soma += sequencia.top();
        sequencia.pop();
    }
    cout << soma << endl;
}