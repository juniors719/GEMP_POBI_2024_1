#include <iostream>
using namespace std;
int main() {
    int A{}, N{}, sum{};
    cin >> A >> N;
    while (N <= 0) cin >> N;
    for (int i = 0; i < N; i++) {
        sum += A + i;
    }
    cout << sum << endl;
}