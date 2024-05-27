#include <iostream>
using namespace std;

// Para aquecer você para esta competição, vamos pedir que você desenvolva um programa que calcule o quociente e o resto da divisão de dois números inteiros, pode ser? Lembre que o quociente e o resto da divisão de um inteiro a por um inteiro não-nulo b são respectivamente os únicos inteiros q e r tais que 0 ≤ r < |b| e:

// a = b × q + r

// Caso você não saiba, o teorema que garante a existência e a unicidade dos inteiros q e r é conhecido como ‘Teorema da Divisão Euclidiana’ ou ‘Algoritmo da Divisão’.

// Entrada
// A entrada é composta por dois números inteiros a e b (-1.000 ≤ a, b < 1.000).

// Saída
// Imprima o quociente q seguido pelo resto r da divisão de a por b.

// Exemplo de Entrada
// 7 3
// >>>>>>>>>>>>>>>>>
// 2 1

// 7 -3
// >>>>>>>>>>>>>>>>>
// -2 1

// -7 3
// >>>>>>>>>>>>>>>>>
// -3 2

int main() {
    int a, b;
    cin >> a >> b;
    int quociente = a / b;
    int resto = a % b;
    if (resto < 0 && b > 0) {
        resto += abs(b);
        quociente -= 1;
    } else if (resto < 0 && b < 0) {
        resto += abs(b);
        quociente += 1;
    }

    cout << quociente << " " << resto << endl;
}