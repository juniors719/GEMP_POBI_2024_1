#include <bits/stdc++.h>
using namespace std;

int n;
bool dentro_do_grid(int& x, int& y) {
    return (x >= 0 && x < n) && (y >= 0 && y < n);
}

int main() {
    vector<int> dirX = {-1, -1, -1, 1, 1, 1, 0, 0};
    vector<int> dirY = {-1, 0, 1, -1, 0, 1, -1, 1};

    int q;
    cin >> n >> q;
    vector<vector<char>> grid(n, vector<char>(n));
    for (int l = 0; l < n; l++) {
        for (int c = 0; c < n; c++) {
            cin >> grid[l][c];
        }
    }
    while (q--) {
        vector<vector<char>> new_grid(n, vector<char>(n));
        for (int l = 0; l < n; l++) {
            for (int c = 0; c < n; c++) {
                int qtdVizinhosVivos{};
                for (int i = 0; i < 8; i++) {
                    int x = c + dirX[i];
                    int y = l + dirY[i];
                    if (dentro_do_grid(x, y) && grid[x][y] == '1') qtdVizinhosVivos++;
                }
                cout << "[" << l << ", " << c << "] = " << qtdVizinhosVivos << endl;

                new_grid[l][c] = grid[l][c];
                if (grid[l][c] == '0' && qtdVizinhosVivos == 3)
                    new_grid[l][c] = '1';
                else if (grid[l][c] == '1' && (qtdVizinhosVivos < 2 || qtdVizinhosVivos > 3))
                    new_grid[l][c] = '0';
            }
        }
        grid = new_grid;
    }
    cout << endl
         << endl;
    for (auto i : grid) {
        for (auto j : i) {
            cout << j;
        }
        cout << endl;
    }
}
