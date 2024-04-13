#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double res{};
    for (double i = 1, j = 1; i <= 39; i += 2, j *= 2) res += (i / j);
    cout << fixed << setprecision(2) << res << endl;
}