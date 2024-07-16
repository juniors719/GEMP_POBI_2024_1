#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res;
    res.reserve(numRows);
    for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j <= i / 2; ++j) {
            row[j] = row[i - j] = res[i - 1][j - 1] + res[i - 1][j];
        }
        res.push_back(row);
    }
    return res;
}

int main() {
    int numRows;
    cin >> numRows;
    vector<vector<int>> res = generate(numRows);
    for (auto row : res) {
        for (int i : row) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}