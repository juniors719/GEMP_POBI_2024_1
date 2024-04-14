#include <iostream>
using namespace std;
int main() {
    int n{}, counter{}, last{}, current{}, lastmarked{};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> current;
        if ((i == 0) || (current != lastmarked)) {
            lastmarked = current;
            counter++;
        }
        last = current;
    }
    cout << counter << endl;
}