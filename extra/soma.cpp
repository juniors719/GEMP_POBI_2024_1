#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int qtd, soma, counter = 0;
    cin >> qtd >> soma;
    int* vet = new int[qtd];
    int* prefixSum = new int[qtd + 1];
    unordered_map<int, int> freq;

    for (int i = 0; i < qtd; i++) {
        cin >> vet[i];
    }

    // Calcula a soma dos prefixos
    prefixSum[0] = 0;
    for (int i = 1; i <= qtd; i++) {
        prefixSum[i] = prefixSum[i - 1] + vet[i - 1];
    }

    // Conta os subintervalos com soma igual a 'soma'
    for (int i = 0; i <= qtd; i++) {
        int complemento = prefixSum[i] - soma;
        if (freq.find(complemento) != freq.end()) {
            counter += freq[complemento];
        }
        freq[prefixSum[i]]++;
    }

    cout << counter << endl;

    delete[] vet;
    delete[] prefixSum;

    return 0;
}
