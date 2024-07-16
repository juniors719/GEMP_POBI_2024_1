#include <bits/stdc++.h>
using namespace std;
int main() {
    int n{}, matricula{}, matriculaMaiorNota{};
    double nota{}, maiornota{-1};
    cin >> n;
    while (n--) {
        cin >> matricula >> nota;
        if (nota > maiornota) {
            maiornota = nota;
            matriculaMaiorNota = matricula;
        }
    }
    if (maiornota < 8)
        cout << "Minimum note not reached\n";
    else
        cout << matriculaMaiorNota << endl;
}