#include <bits/stdc++.h>
using namespace std;

int n, q;

vector<pair<int, int>> directions = {
    {0, 1},
    {0, -1},
    {1, 0},
    {1, -1},
    {-1, 0},
    {-1, -1},
    {-1, 1},
    {1, 1}};

void print(vector<vector<bool>>& v) {
    for (auto& i : v) {
        for (bool j : i) {
            cout << j;
        }
        cout << endl;
    }
}

bool isValid(int& x, int& y) {
    return (x >= 0 && x < n) && (y >= 0 && y < n);
}

void rodada(vector<vector<bool>>& v) {
    vector<vector<bool>> new_grid = v;
    // print(new_grid);
    for (int l = 0; l < n; l++) {
        for (int c = 0; c < n; c++) {
            int qtdVivos = 0;
            for (int k = 0; k < 8; k++) {
                int newX = l + directions[k].first;
                int newY = c + directions[k].second;
                if (isValid(newX, newY)) {
                    if (v[newX][newY]) qtdVivos++;
                }
            }
            if (v[l][c] && (qtdVivos < 2 || qtdVivos > 3)) {
                new_grid[l][c] = false;
            } else if (!v[l][c] && qtdVivos == 3) {
                new_grid[l][c] = true;
            }
        }
    }
    v = new_grid;
}

int main() {
    cin >> n >> q;

    // inicializando uma matriz NxN com valores 0;
    vector<vector<bool>> grid(n);

    for (auto& i : grid) {
        string linha;
        cin >> linha;
        for (int j = 0; j < n; j++) {
            if (linha[j] == '0')
                i.push_back(false);
            else
                i.push_back(true);
        }
    }

    while (q--) {
        rodada(grid);
    }
    print(grid);
}