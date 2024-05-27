#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double M[12][12]{};
    double sum{}, aux{};
    char op;
    cin >> op;
    int counter{};
    for (int l = 0; l < 12; l++) {
        for (int c = 0; c < 12; c++) {
            cin >> aux;
            M[l][c] = aux;
            if (c + l < 11 && c > l) {
                sum += aux;
                counter++;
            }
        }
    }
    cout << fixed << setprecision(1);
    switch (op) {
        case 'S':
            cout << sum << endl;
            break;

        case 'M':
            cout << (sum / (double)counter) << endl;
            break;

        default:
            break;
    }
}