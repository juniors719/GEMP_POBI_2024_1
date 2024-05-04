#include <iostream>

using namespace std;

int main() {
    int decimal, resto;
    string hex = "";

    cin >> decimal;

    while (decimal > 0) {
        resto = decimal % 16;

        if (resto < 10)
            hex = to_string(resto) + hex;
        else
            hex = (char)(resto + 55) + hex;

        decimal /= 16;
    }
    cout << hex << endl;
}