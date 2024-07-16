#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    vector<int> qDiv(4, 0);
    cin >> n;
    while (n--) {
        cin >> l;
        for (int i = 0; i < 4; i++) {
            if (l % (i + 2) == 0) qDiv[i]++;
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << qDiv[i] << " Multiplo(s) de " << i + 2 << endl;
    }
}