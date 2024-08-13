#include <bits/stdc++.h>
using namespace std;

int somaDigits(int n) {
    int soma = 0;
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main() {
    int targetSomaDigits, A, B;
    cin >> targetSomaDigits >> A >> B;

    while (true) {
        if (somaDigits(A) == targetSomaDigits) {
            cout << A << endl;
            break;
        }
        A++;
    }

    while (true) {
        if (somaDigits(B) == targetSomaDigits) {
            cout << B << endl;
            break;
        }
        B--;
    }
}