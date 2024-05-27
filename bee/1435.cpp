#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int value = min(min(i, j), min(n - i - 1, n - j - 1)) + 1;

                cout << setw(3) << value;

                if (j < n - 1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
