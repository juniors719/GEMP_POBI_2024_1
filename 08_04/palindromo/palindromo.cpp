#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int reverso{0}, original{n};

    while (n > 0) {
        reverso = reverso * 10 + n % 10;  // Adiciona o último dígito de n ao reverso
        n /= 10;                          // Remove o último dígito de n
    }

    if (original == reverso)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}