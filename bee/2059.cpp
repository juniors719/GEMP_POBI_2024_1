#include <bits/stdc++.h>
using namespace std;
int main() {
    bool par_jog1, roubo, acusacao, jog1_ganhador{false};
    int n1, n2;
    cin >> par_jog1 >> n1 >> n2 >> roubo >> acusacao;
    bool impar = (bool)((n1 + n2) & 1);
    if ((par_jog1 && !impar) || (!par_jog1 && impar))
        jog1_ganhador = true;
    else {
        if (roubo) {
            if (acusacao)
                jog1_ganhador = false;
            else
                jog1_ganhador = true;
        } else
            jog1_ganhador = false;
    }
    cout << (jog1_ganhador ? "Jogador 1 ganha!\n" : "Jogador 2 ganha!\n");
}