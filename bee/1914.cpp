#include <iostream>
using namespace std;
int main() {
    int qt, n, m;
    cin >> qt;
    string jg1, jg2, p, i;
    while (qt--) {
        cin >> jg1 >> p >> jg2 >> i;
        cin >> n >> m;
        if ((n + m) % 2 == 0)
            cout << (p == "PAR" ? jg1 : jg2) << endl;
        else
            cout << (p == "IMPAR" ? jg1 : jg2) << endl;
    }
}