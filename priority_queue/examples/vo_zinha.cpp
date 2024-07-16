#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

string findPassword(const string &password, const vector<vector<char>> &substitutes, int P) {
    int M = substitutes.size();  // número de caracteres borrados
    int N = password.size();     // tamanho da senha

    // Calcular o total de combinações possíveis
    vector<int> sizes(M);
    int totalCombinations = 1;
    for (int i = 0; i < M; ++i) {
        sizes[i] = substitutes[i].size();
        totalCombinations *= sizes[i];
    }

    // Ajustar P para índice baseado em zero
    P--;

    // Calcular os índices de cada substituição
    vector<int> indices(M);
    for (int i = 0; i < M; ++i) {
        indices[i] = P % sizes[i];
        P /= sizes[i];
    }

    // Montar a senha final
    string result = password;
    for (int i = 0; i < N; ++i) {
        if (result[i] == '#') {
            result[i] = substitutes[i][indices[i]];
        }
    }

    return result;
}

int main() {
    int N, M, K, P;
    cin >> N >> M >> K;
    string password;
    cin >> password;

    vector<vector<char>> substitutes(M, vector<char>(K));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < K; ++j) {
            cin >> substitutes[i][j];
        }
    }
    cin >> P;

    // Encontrar a senha correta
    string result = findPassword(password, substitutes, P);

    cout << result << endl;

    return 0;
}
