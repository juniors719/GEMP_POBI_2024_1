#include <iostream>
using namespace std;
int main() {
    int l{}, v{}, maior_velocidade{};
    while (cin >> l) {
        maior_velocidade = 0;
        for (size_t i = 0; i < l; i++) {
            cin >> v;
            if (v > maior_velocidade) maior_velocidade = v;
        }
        if (maior_velocidade < 10)
            cout << 1 << endl;
        else if (maior_velocidade >= 10 && maior_velocidade < 20)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
}