#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n{};
    while (true) {
        cin >> n;
        if (!n) break;
        int width = (int)log10(pow(2, 2 * (n - 1)) + 1) + 1;
        for (int l = 0; l < n; l++) {
            for (int c = 0; c < n; c++) {
                cout << setw(width) << (long int)pow(2, l + c);
                if (c < n - 1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}