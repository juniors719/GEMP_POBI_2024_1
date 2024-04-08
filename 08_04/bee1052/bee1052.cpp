#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int m{};
    cin >> m;
    string mes;
    if (m == 1)
        mes = "January";
    else if (m == 2)
        mes = "February";
    else if (m == 3)
        mes = "March";
    else if (m == 4)
        mes = "April";
    else if (m == 5)
        mes = "May";
    else if (m == 6)
        mes = "June";
    else if (m == 7)
        mes = "July";
    else if (m == 8)
        mes = "August";
    else if (m == 9)
        mes = "September";
    else if (m == 10)
        mes = "October";
    else if (m == 11)
        mes = "November";
    else if (m == 12)
        mes = "December";

    cout << mes << endl;
    return 0;
}