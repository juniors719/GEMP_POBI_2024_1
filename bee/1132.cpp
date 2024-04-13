#include <iostream>
using namespace std;

int main() {
    int x{}, y{}, soma{};
    cin >> x >> y;
    if (x > y) swap(x, y);
    for (int i = x; i <= y; i++) {
        if (i % 13 != 0) soma += i;
    }
    cout << soma << endl;
}