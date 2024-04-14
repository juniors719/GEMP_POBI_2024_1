#include <iostream>
using namespace std;
int main() {
    int n{}, l{};
    bool np{};
    cin >> n;
    while (n--) {
        np = false;
        cin >> l;
        for (int i = 2; i * i <= l; i++) {
            if (l % i == 0) {
                np = true;
                break;
            }
        }
        if (np)
            cout << l << " nao eh primo\n";
        else
            cout << l << " eh primo\n";
    }
}