#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double res{};
    for (double i = 1; i <= 100; i++) res += (1 / i);
    cout << fixed << setprecision(2) << res << endl;
}