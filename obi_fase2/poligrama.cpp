#include <bits/stdc++.h>
using namespace std;

// Função para verificar se duas strings são anagramas
bool areAnagrams(string a, string b) {
    sort(a.begin(), a.end());
    return a == b;
}

int main() {
    int N;
    string P;
    cin >> N >> P;

    // Verifica todos os possíveis comprimentos de raízes (divisores de N)
    for (int len = 1; len <= N; len++) {
        if (N % len == 0) {
            string root = P.substr(0, len);
            bool isPoligrama = true;

            // Verifica se todas as partes são anagramas da raiz
            for (int i = 0; i < N; i += len) {
                string part = P.substr(i, len);
                if (!areAnagrams(root, part)) {
                    isPoligrama = false;
                    break;
                }
            }

            if (isPoligrama) {
                cout << root << endl;
                return 0;
            }
        }
    }

    // Se nenhum comprimento for válido, retorna '*'
    cout << '*' << endl;
    return 0;
}
