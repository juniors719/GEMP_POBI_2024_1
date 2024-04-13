#include <iostream>
using namespace std;

int main() {
    int n, counter{};
    cin >> n;
    while (n--) {
        cout << counter + 1 << " " << counter + 2 << " " << counter + 3 << " " << "PUM\n";
        counter += 4;
    }
}