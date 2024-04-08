#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int m{};
    cin >> m;
    string mes[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cout << mes[m - 1] << endl;
    return 0;
}