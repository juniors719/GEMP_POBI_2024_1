#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& esteira, int peca) {
    for (int i = 0; i < esteira.size(); i++) {
        if (esteira[i] == peca) {
            return i;
        }
    }
    return -1;
}

int main() {
    int quant_pecas;
    int quant_modelA{}, quant_modelB{}, quant_modelC{};
    cin >> quant_pecas;

    vector<int> esteira;

    for (int i = 0; i < quant_pecas; i++) {
        int peca;
        cin >> peca;

        esteira.push_back(peca);
        if (esteira.back() == 5 || esteira.back() == 3 || esteira.back() == 1) {
            int pos1 = search(esteira, 1);
            int pos3 = search(esteira, 3);
            int pos5 = search(esteira, 5);
            if (pos1 != -1 && pos3 != -1 && pos5 != -1) {
                esteira.erase(esteira.begin() + pos1);
                pos3 = search(esteira, 3);
                esteira.erase(esteira.begin() + pos3);
                pos5 = search(esteira, 5);
                esteira.erase(esteira.begin() + pos5);
                quant_modelA++;
            }
        }
        if (esteira.back() == 4 || esteira.back() == 1) {
            // tenta fazer o modelo B (1 e 4)
            int pos1 = search(esteira, 1);
            int pos4 = search(esteira, 4);
            if (pos1 != -1 && pos4 != -1) {
                esteira.erase(esteira.begin() + pos1);
                pos4 = search(esteira, 4);
                esteira.erase(esteira.begin() + pos4);
                quant_modelB++;
            }
        }
        if (esteira.back() == 2 || esteira.back() == 4) {
            int pos2 = search(esteira, 2);
            int pos4 = search(esteira, 4);
            if (pos2 != -1 && pos4 != -1) {
                esteira.erase(esteira.begin() + pos2);
                pos4 = search(esteira, 4);
                esteira.erase(esteira.begin() + pos4);
                quant_modelC++;
            }
        }
    }

    cout << "A: " << quant_modelA << endl
         << "B: " << quant_modelB << endl
         << "C: " << quant_modelC << endl;
}