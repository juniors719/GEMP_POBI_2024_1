#include <iostream>
using namespace std;
int main() {
    string line;
    int counter = 3, sum{};
    while (counter) {
        getline(cin, line);

        if (line == "caw caw") {
            cout << sum << endl;
            counter--;
            sum = 0;
        } else {
            if (line[0] == '*') sum += 4;
            if (line[1] == '*') sum += 2;
            if (line[2] == '*') sum += 1;
        }
    }
}