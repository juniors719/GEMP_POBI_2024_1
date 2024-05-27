#include <iostream>
using namespace std;

int main() {
    int n{}, p{}, last{}, l{};
    cin >> p >> n;
    for (size_t i = 0; i < n; i++) {
        cin >> l;
        if (i > 0 && abs(last - l) > p) {
            cout << "GAME OVER\n";
            return 0;
        }
        last = l;
    }
    cout << "YOU WIN\n";
    return 0;
}