#include <bits/stdc++.h>
using namespace std;

int main() {
    int ana, beatriz, cadeira_carolina = 0;
    cin >> ana >> beatriz;

    int cadeira_ana = ana % 3;
    int cadeira_beatriz = beatriz % 3;
    if (cadeira_ana == cadeira_beatriz) cadeira_beatriz = (cadeira_beatriz + 1) % 3;
    while (cadeira_carolina == cadeira_ana || cadeira_carolina == cadeira_beatriz) cadeira_carolina = (cadeira_carolina + 1) % 3;
    cout << cadeira_carolina << endl;
}