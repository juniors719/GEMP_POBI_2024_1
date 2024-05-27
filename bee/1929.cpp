#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int aux;
    vector<int> medidas;
    for (size_t i = 0; i < 4; i++) {
        cin >> aux;
        medidas.push_back(aux);
    }
    sort(medidas.begin(), medidas.end());
    if (
        (medidas[2] <= (medidas[0] + medidas[1])) ||
        (medidas[3] <= (medidas[0] + medidas[1])) ||
        (medidas[3] <= (medidas[0] + medidas[2])) ||
        (medidas[3] <= (medidas[2] + medidas[1])))
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}