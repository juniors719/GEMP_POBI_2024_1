#include <iostream>
using namespace std;
int main() {
    int x{}, y{}, c{};
    cin >> x >> y;
    while (true) {
        c++;
        cout << c;
        for (int i = 1; i < x; i++) {
            c++;
            cout << " " << c;
            if (c == y) {
                cout << endl;
                return 0;
            }
        }
        cout << endl;
    }
}