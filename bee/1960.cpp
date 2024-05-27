#include <iostream>
using namespace std;
int main() {
    int n, digito{}, centena{}, dezena{}, unidade{};
    cin >> n;
    string romano;
    centena = n / 100;
    dezena = (n % 100) / 10;
    unidade = n % 10;
    // centena
    if (centena == 9)
        romano += "CM";
    else if (centena == 4)
        romano += "CD";
    else if (centena >= 5) {
        romano += "D";
        for (size_t i = 0; i < centena - 5; i++)
            romano += "C";
    } else {
        for (size_t i = 0; i < centena; i++)
            romano += "C";
    }
    // dezena
    if (dezena == 9)
        romano += "XC";
    else if (dezena == 4)
        romano += "XL";
    else if (dezena >= 5) {
        romano += "L";
        for (size_t i = 0; i < dezena - 5; i++)
            romano += "X";
    } else {
        for (size_t i = 0; i < dezena; i++)
            romano += "X";
    }
    // unidade
    if (unidade == 9)
        romano += "IX";
    else if (unidade == 4)
        romano += "IV";
    else if (unidade >= 5) {
        romano += "V";
        for (size_t i = 0; i < unidade - 5; i++)
            romano += "I";
    } else {
        for (size_t i = 0; i < unidade; i++)
            romano += "I";
    }
    cout << romano << endl;
    return 0;
}