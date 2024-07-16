#include <bits/stdc++.h>
using namespace std;
int main() {
    double volume{}, diametro{}, area_bocal{}, altura{}, raio{};
    while (cin >> volume >> diametro) {
        raio = (diametro / 2);
        area_bocal = raio * raio * 3.14;
        altura = volume / area_bocal;
        cout << fixed << setprecision(2) << "ALTURA = " << altura << endl;
        cout << fixed << setprecision(2) << "AREA = " << area_bocal << endl;
    }
}