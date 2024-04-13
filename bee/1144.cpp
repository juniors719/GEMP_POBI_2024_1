#include <iostream>
using namespace std;

int main() {
    int n{}, x{1}, y{1}, z{1};
    cin >> n;
    while (n--) {
        cout << x << " " << y << " " << z << endl;
        y++;
        z++;
        cout << x << " " << y << " " << z << endl;
        x++;
        y = x * x;
        z = y * x;
    }
}