#include <iostream>
using namespace std;
int main() {
    while (true) {
        int x{}, y{5}, res{};
        cin >> x;
        if (x == 0) break;
        if (x % 2 != 0) x++;
        for (int i = 0; i < 5; i++, x += 2) res += x;
        cout << res << endl;
    }
}