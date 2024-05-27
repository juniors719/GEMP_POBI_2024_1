#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double M[12][12];
    double aux, sum{};
    int c{};
    char op;
    cin >> c;
    cin >> op;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> aux;
            M[i][j] = aux;
        }
    }
    for (int j = 0; j < 12; j++) {
        sum += M[j][c];
    }
    cout << fixed << setprecision(1);
    if (op == 'S')
        cout << sum << endl;
    else
        cout << (sum / 12) << endl;

    return 0;
}