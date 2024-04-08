#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int r{}, a;
        cin >> a;

        r = 2015 - a;

        if (r > 0) {
            cout << r << " D.C.\n";
        } else {
            cout << (r * -1) + 1 << " A.C.\n";
        }
    }
}