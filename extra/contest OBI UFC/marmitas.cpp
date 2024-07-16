#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marms = {100, 50, 25, 10, 5, 2, 1};
    int n, ans{};
    cin >> n;
    auto it = marms.begin();
    while (n) {
        if (n >= *it) {
            n -= *it;
            ans++;
        } else {
            it++;
        }
    }
    cout << ans << endl;
    return 0;
}