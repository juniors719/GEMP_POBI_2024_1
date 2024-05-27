#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cout << "Ho";
        if (i < n - 1) cout << " ";
    }
    cout << "!\n";
    return 0;
}