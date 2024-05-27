#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    unordered_map<string, pair<string, string>> ops = {
        {"tesoura", make_pair("papel", "lagarto")},
        {"papel", make_pair("pedra", "Spock")},
        {"pedra", make_pair("lagarto", "tesoura")},
        {"lagarto", make_pair("Spock", "papel")},
        {"Spock", make_pair("tesoura", "pedra")}};
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        string p1, p2;
        cin >> p1 >> p2;
        cout << "Caso #" << i << ": ";
        if (p1 == p2)
            cout << "De novo!\n";
        else if (ops[p1].first == p2 || ops[p1].second == p2)
            cout << "Bazinga!\n";
        else
            cout << "Raj trapaceou!\n";
    }
    return 0;
}