#include <iostream>
using namespace std;
int main() {
    int a{}, b{}, c{};
    bool felicidade{};
    cin >> a >> b >> c;
    if (a > b) {
        if (b <= c) {
            felicidade = true;
        } else {
            if (abs(b - c) < abs(a - b))
                felicidade = true;
            else
                felicidade = false;
        }
    } else if (a < b) {
        if (b >= c) {
            felicidade = false;
        } else {
            if (abs(b - c) < abs(a - b))
                felicidade = false;
            else
                felicidade = true;
        }
    } else {
        if (b < c)
            felicidade = true;
        else
            felicidade = false;
    }

    if (felicidade)
        cout << ":)\n";
    else
        cout << ":(\n";
}