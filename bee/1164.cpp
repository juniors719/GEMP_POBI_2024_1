#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n{}, res{};
        cin >> n;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) res += i;
        }
        if (res == n)
            cout << n << " eh perfeito\n";
        else
            cout << n << " nao eh perfeito\n";
    }
}