#include <bits/stdc++.h>
using namespace std;
int main() {
    int s, t, f;
    cin >> s >> t >> f;
    int r = ((s + t + f) % 24);
    cout << (r < 0 ? r + 24 : r) << endl;
}