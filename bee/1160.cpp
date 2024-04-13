#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int pa, pb, counter{};
        double g1, g2;
        cin >> pa >> pb >> g1 >> g2;
        while (true) {
            counter++;
            pa += (int)(pa * (double)(g1 / 100));
            pb += (int)(pb * (double)(g2 / 100));
            if (pa > pb) {
                cout << counter << " anos.\n";
                break;
            }
            if (counter == 100) {
                cout << "Mais de 1 seculo.\n";
                break;
            }
        }
    }
}