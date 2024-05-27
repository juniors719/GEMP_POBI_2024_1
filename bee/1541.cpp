#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int a{}, b{}, c{}, result{};
    while (true) {
        cin >> a;
        if (!a) break;
        cin >> b;
        if (!b) break;
        cin >> c;
        if (!c) break;

        result = floor(sqrt((a * b * 100) / c));

        cout << result << endl;
    }
}