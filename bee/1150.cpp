#include <iostream>
using namespace std;
int main() {
    int x{}, z{}, sum{}, counter{};
    cin >> x >> z;
    while (z <= x) cin >> z;
    while (sum <= z) {
        sum += x;
        x++;
        counter++;
    }
    cout << counter << endl;
}