#include <iostream>
using namespace std;

int main() {
    int gremio{}, inter{}, empates{}, counter{}, gols_inter{}, gols_gremio{}, opc{};

    while (true) {
        counter++;
        cin >> gols_inter >> gols_gremio;
        if (gols_inter == gols_gremio)
            empates++;
        else if (gols_inter > gols_gremio)
            inter++;
        else
            gremio++;

        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> opc;
        if (opc == 2) break;
    }

    cout << counter << " grenais\n";
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empates << endl;
    if (inter > gremio)
        cout << "Inter venceu mais\n";
    else
        cout << "Gremio venceu mais\n";
}