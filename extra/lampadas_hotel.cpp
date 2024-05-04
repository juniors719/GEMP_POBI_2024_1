#include <iostream>

using namespace std;

int main() {
    bool ini_a{}, ini_b{}, fin_a{}, fin_b{};
    int counter = 0;
    cin >> ini_a >> ini_b >> fin_a >> fin_b;
    while (ini_a != fin_a || ini_b != fin_b) {
        if (fin_b != ini_b) {
            counter++;
            ini_b = (ini_b) ? false : true;
            ini_a = (ini_a) ? false : true;
        }
        if (ini_a != fin_a) {
            counter++;
            ini_a = (ini_a) ? false : true;
        }
    }
    cout << counter << endl;
}