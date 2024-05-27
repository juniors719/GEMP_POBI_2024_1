
#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int l = 0; l < n; l++) {
            for (int c = 0; c < n; c++) {
                if (l + c + 1 == n)
                    cout << 2;
                else if (l == c)
                    cout << 1;
                else
                    cout << 3;
            }
            cout << endl;
        }
    }
    return 0;
}
