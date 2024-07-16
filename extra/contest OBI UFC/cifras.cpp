#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

// Vendo o quanto isso pode ser complicado, Darth Vader contratou você como programador freelancer para desenvolver um script que dado as duas mensagens interceptadas entre Denilson e Weryck, informe a mensagem verdadeira.

// Input Format

// A entrada contem 3 linhas. A primeira linha é composta por dois inteiros n e m, que representam o tamanho da mensagem 1 e da mensagem 2, respectivamente. A segunda e terceira linha representa a mensagem 1 e mensagem 2, respectivamente.

// Constraints

// 1 < n, m < 100

// Output Format

// Imprima a mensagem decifrada enviada entre Denilson e Weryck.

// Sample Input 0

// q####e_ei####rr#e_tro#######!
// u###md##cf###a_ho####ai

// Sample Output 0

// quem_decifrar_eh_otario!

int main() {
    string cifra1, cifra2, res;
    cin >> cifra1 >> cifra2;
    auto it = cifra1.begin();
    auto it2 = cifra2.begin();
    while (it != cifra1.end() || it2 != cifra2.end()) {
        while (*it == '#' && it != cifra1.end()) {
            ++it;
        }
        if (it != cifra1.end()) {
            res += *it;
            ++it;
        }
        while (*it2 == '#' && it2 != cifra2.end()) {
            ++it2;
        }
        if (it2 != cifra2.end()) {
            res += *it2;
            ++it2;
        }
    }
    cout << res << endl;
}