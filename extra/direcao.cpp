#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> dir = {
        {"norte", 0},
        {"sul", 180},
        {"leste", 270},
        {"oeste", 90}};

    string a, b;
    cin >> a >> b;
    int angulo{};
    if (a != b) {
        angulo = abs(dir[a] - dir[b]);
        angulo = (angulo > 180) ? 360 - angulo : angulo;
    }
    cout << angulo << endl;
}