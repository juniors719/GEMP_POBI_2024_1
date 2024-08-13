#include <bits/stdc++.h>
using namespace std;

struct Fotografia {
    int altura, largura;
};

int main() {
    Fotografia foto;
    cin >> foto.altura >> foto.largura;
    int quant_molduras, melhor_opcao = -1;
    double area_restate_melhor_opcao = 0;
    cin >> quant_molduras;
    for (int i = 1; i <= quant_molduras; i++) {
        int altura, largura;
        cin >> altura >> largura;
        if ((altura >= foto.altura && largura >= foto.largura) || (altura >= foto.largura && largura >= foto.altura)) {
            double area_restante = (altura * largura) - (foto.altura * foto.largura);
            if (melhor_opcao == -1 || area_restante < area_restate_melhor_opcao) {
                melhor_opcao = i;
                area_restate_melhor_opcao = area_restante;
            }
        }
    }
    cout << melhor_opcao << endl;
}