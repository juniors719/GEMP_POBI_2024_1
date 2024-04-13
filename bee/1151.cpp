#include <iostream>
using namespace std;
int main() {
    int n1{0}, n2{1}, n{};
    cin >> n;
    for (int i{0}; i < n; i++) {
        if (i == 0) {
            cout << n1;
            continue;
        }
        if (i == 1) {
            cout << " " << n2;
            continue;
        }
        int r = n1 + n2;
        n1 = n2;
        n2 = r;
        cout << " " << r;
    }
    cout << endl;
}