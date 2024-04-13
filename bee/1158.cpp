#include <iostream>
using namespace std;

int main() {
    int qtdCasos;
    cin >> qtdCasos;
    while (qtdCasos--) {
        int x{}, y{}, res{};
        cin >> x >> y;
        while (y > 0) {
            if (x % 2 != 0) {
                res += x;
                y--;
            }
            x++;
        }
        cout << res << endl;
    }
}