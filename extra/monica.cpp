#include <iostream>
using namespace std;
int main() {
    int m, a, b, c, mais_velho = 0;
    cin >> m >> a >> b;
    c = m - a - b;
    if (a > b && a > c)
        mais_velho = a;
    else if (b > a && b > c)
        mais_velho = b;
    else
        mais_velho = c;
    cout << mais_velho << endl;
}