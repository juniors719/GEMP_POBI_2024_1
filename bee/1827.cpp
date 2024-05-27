#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int meiuca = n / 2;
        int quad_interno = n / 3;
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < n; j++) {
                if (i == meiuca && j == meiuca)
                    cout << 4;
                else if ((i >= quad_interno && i <= n - quad_interno - 1) && (j >= quad_interno && j <= n - quad_interno - 1))
                    cout << 1;
                else if (i == j)
                    cout
                        << 2;
                else if (i + j == n - 1)
                    cout << 3;
                else
                    cout << 0;
            }
            cout << endl;
        }
        cout << endl;
    }
}