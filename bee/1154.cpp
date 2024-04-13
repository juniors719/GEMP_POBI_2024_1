#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int idade{}, acum{}, counter{};
    double res{};
    while (true) {
        cin >> idade;
        if (idade < 0) break;
        acum += idade;
        counter++;
    }
    res = (float)acum / counter;
    cout << fixed << setprecision(2) << res << endl;
    return 0;
}