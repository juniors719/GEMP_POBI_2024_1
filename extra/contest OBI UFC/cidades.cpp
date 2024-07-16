#include <bits/stdc++.h>
using namespace std;

// Seu programa deve produzir uma única linha, com apenas um número inteiro, o número máximo de pontos turísticos que Marcus consegue visitar, seguindo as regras da competição.

// Sample Input 0

// 6
// 1 2
// 1 3
// 2 4
// 2 5
// 5 6
// Sample Output 0

// 5

int main() {
    int n;
    cin >> n;
    unordered_map<int, unordered_set<int>> pontos;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        pontos[a].insert(b);
        pontos[b].insert(a);
    }
    int ans = 0;
    for (auto [p, adj] : pontos) {
        if (adj.size() == 1) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
