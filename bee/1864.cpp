#include <iostream>
using namespace std;
int main() {
    string citacao = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cout << citacao[i];
    }
    cout << endl;
}